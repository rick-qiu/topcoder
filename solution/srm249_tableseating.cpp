/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4616
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

class TableSeating {
public:
    double getExpected(int numTables, vector<int> probs);
};

double TableSeating::getExpected(int numTables, vector<int> probs) {
    double ret;
    return ret;
}


int test0() {
    int numTables = 4;
    vector<int> probs = {100};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int numTables = 4;
    vector<int> probs = {0, 100};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3333333333333335;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int numTables = 5;
    vector<int> probs = {0, 0, 0, 0, 0, 50, 50};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int numTables = 12;
    vector<int> probs = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.871087929710551;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int numTables = 12;
    vector<int> probs = {50, 50};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 10.481925778559631;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int numTables = 12;
    vector<int> probs = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 15};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.808255233597771;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int numTables = 12;
    vector<int> probs = {9, 13, 12, 11, 10, 9, 8, 7, 6, 5, 10};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.845338058149987;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int numTables = 1;
    vector<int> probs = {50, 50};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int numTables = 12;
    vector<int> probs = {10, 10, 10, 10, 10, 10, 10, 10, 10, 5, 5};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.791471890555719;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int numTables = 12;
    vector<int> probs = {0, 0, 0, 0, 0, 0, 0, 100};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int numTables = 12;
    vector<int> probs = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int numTables = 11;
    vector<int> probs = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int numTables = 12;
    vector<int> probs = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int numTables = 11;
    vector<int> probs = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int numTables = 11;
    vector<int> probs = {0, 0, 0, 100, 0, 0, 0, 0};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int numTables = 12;
    vector<int> probs = {5, 11, 9, 8, 14, 9, 13, 8, 7, 5, 7, 4};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.936797412852827;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int numTables = 12;
    vector<int> probs = {7, 11, 3, 10, 7, 8, 10, 6, 10, 9, 9, 10};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.126028036598123;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int numTables = 12;
    vector<int> probs = {7, 8, 10, 6, 11, 3, 11, 8, 12, 4, 9, 11};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.118801968504272;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int numTables = 12;
    vector<int> probs = {5, 7, 8, 5, 9, 12, 10, 10, 11, 6, 10, 7};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.11048707258796;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int numTables = 12;
    vector<int> probs = {10, 8, 6, 6, 13, 9, 7, 9, 7, 6, 8, 11};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.049878648612912;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int numTables = 12;
    vector<int> probs = {8, 8, 8, 5, 8, 15, 13, 10, 2, 5, 12, 6};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.986177114965399;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int numTables = 12;
    vector<int> probs = {5, 10, 6, 6, 7, 10, 9, 4, 8, 7, 12, 16};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.348414551784307;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int numTables = 12;
    vector<int> probs = {7, 8, 12, 9, 12, 7, 6, 8, 10, 3, 7, 11};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.052738612235387;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int numTables = 12;
    vector<int> probs = {9, 6, 16, 9, 11, 9, 3, 7, 8, 9, 8, 5};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.943718551056782;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int numTables = 12;
    vector<int> probs = {2, 9, 9, 13, 6, 7, 6, 11, 10, 11, 8, 8};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.161556462174529;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int numTables = 12;
    vector<int> probs = {6, 13, 6, 11, 4, 7, 14, 8, 5, 8, 9, 9};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.047133841306092;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int numTables = 12;
    vector<int> probs = {9, 4, 11, 5, 9, 8, 6, 7, 11, 13, 10, 7};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.125227737892228;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int numTables = 12;
    vector<int> probs = {10, 8, 10, 4, 4, 9, 6, 12, 12, 6, 7, 12};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.097772321164507;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int numTables = 12;
    vector<int> probs = {9, 9, 6, 7, 10, 5, 3, 14, 4, 10, 8, 15};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.186352110757422;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int numTables = 12;
    vector<int> probs = {10, 8, 5, 8, 11, 7, 5, 9, 8, 8, 8, 13};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.12341030346038;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int numTables = 12;
    vector<int> probs = {10, 4, 11, 10, 4, 5, 9, 10, 9, 10, 7, 11};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.105897639599036;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int numTables = 10;
    vector<int> probs = {7, 8, 7, 7, 11, 7, 13, 9, 8, 7, 9, 7};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 5.548077404403071;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int numTables = 11;
    vector<int> probs = {8, 13, 8, 6, 9, 7, 14, 11, 4, 9, 7, 4};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 6.984070937897883;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int numTables = 8;
    vector<int> probs = {8, 7, 13, 10, 5, 5, 7, 8, 9, 15, 4, 9};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 3.170253495666273;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int numTables = 12;
    vector<int> probs = {3, 12, 8, 6, 10, 8, 7, 12, 11, 11, 6, 6};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.060610638818153;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int numTables = 10;
    vector<int> probs = {9, 10, 9, 6, 8, 11, 9, 9, 8, 7, 8, 6};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 5.613740874240573;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int numTables = 12;
    vector<int> probs = {7, 9, 10, 10, 10, 13, 7, 10, 7, 6, 5, 6};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.943149442547289;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int numTables = 8;
    vector<int> probs = {6, 10, 6, 10, 5, 10, 8, 13, 5, 5, 11, 11};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 3.66637571605075;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int numTables = 7;
    vector<int> probs = {7, 10, 9, 9, 8, 5, 7, 7, 9, 12, 9, 8};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4022283271035416;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int numTables = 11;
    vector<int> probs = {9, 6, 8, 9, 9, 11, 13, 8, 4, 5, 11, 7};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 6.7768584160555685;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int numTables = 5;
    vector<int> probs = {8, 7, 12, 11, 11, 8, 9, 9, 10, 5, 7, 3};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6879347114666667;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int numTables = 10;
    vector<int> probs = {9, 9, 9, 12, 14, 8, 6, 7, 9, 5, 4, 8};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 5.721093711587419;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int numTables = 11;
    vector<int> probs = {8, 8, 6, 7, 10, 7, 10, 14, 5, 14, 9, 2};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.358124714950001;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int numTables = 7;
    vector<int> probs = {6, 7, 8, 7, 6, 7, 7, 12, 6, 8, 10, 16};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.128593734551208;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int numTables = 5;
    vector<int> probs = {3, 6, 12, 14, 5, 7, 6, 9, 7, 11, 7, 13};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3779074283;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int numTables = 7;
    vector<int> probs = {8, 5, 3, 10, 10, 9, 10, 8, 12, 10, 8, 7};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5979698571289807;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int numTables = 5;
    vector<int> probs = {13, 6, 9, 12, 13, 9, 7, 7, 5, 4, 8, 7};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8054801732999999;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int numTables = 5;
    vector<int> probs = {8, 10, 6, 9, 7, 13, 6, 10, 7, 5, 8, 11};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2790011434666668;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int numTables = 6;
    vector<int> probs = {10, 14, 7, 5, 8, 8, 4, 11, 16, 4, 7, 6};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9294564666666671;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int numTables = 12;
    vector<int> probs = {9, 8, 9, 9, 6, 3, 13, 7, 8, 8, 7, 13};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.108452413294861;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int numTables = 11;
    vector<int> probs = {4, 6, 9, 3, 11, 16, 10, 8, 7, 11, 5, 10};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 6.598011997184336;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int numTables = 7;
    vector<int> probs = {10, 5, 8, 10, 7, 8, 4, 10, 6, 6, 11, 15};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2223947250000005;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int numTables = 8;
    vector<int> probs = {11, 14, 9, 10, 7, 6, 12, 3, 9, 10, 4, 5};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5731237470027617;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int numTables = 10;
    vector<int> probs = {9, 5, 9, 8, 10, 4, 4, 12, 8, 10, 9, 12};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 5.202158770327831;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int numTables = 6;
    vector<int> probs = {9, 8, 9, 5, 6, 12, 4, 12, 11, 6, 9, 9};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9160604429810002;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int numTables = 12;
    vector<int> probs = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 12};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.1265900083746;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int numTables = 4;
    vector<int> probs = {100};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int numTables = 12;
    vector<int> probs = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.871087929710551;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int numTables = 3;
    vector<int> probs = {50, 50, 0};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.458333333333333;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int numTables = 12;
    vector<int> probs = {7, 10, 11, 31, 0, 12, 13, 3, 5, 5, 2, 1};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.953231954425785;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int numTables = 12;
    vector<int> probs = {9, 7, 9, 11, 9, 9, 9, 9, 9, 9, 10};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.884999908970048;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int numTables = 11;
    vector<int> probs = {12, 38, 40, 1, 2, 3, 4};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.294557818072061;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int numTables = 4;
    vector<int> probs = {40, 10, 0, 30, 20};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2309333333333337;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int numTables = 1;
    vector<int> probs = {14, 69, 1, 15, 1};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int numTables = 11;
    vector<int> probs = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 45};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 4.487326183089735;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int numTables = 12;
    vector<int> probs = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 5};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.9400870030448685;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int numTables = 12;
    vector<int> probs = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 12};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.1265900083746;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int numTables = 12;
    vector<int> probs = {10, 10, 10, 10, 10, 10, 10, 10, 5, 5, 5, 5};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.867716233990063;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int numTables = 12;
    vector<int> probs = {9, 9, 9, 9, 9, 9, 9, 9, 9, 11, 8};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.859750293346915;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int numTables = 10;
    vector<int> probs = {5, 10, 15, 5, 10, 15, 5, 10, 15, 10};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 6.904985901014728;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int numTables = 12;
    vector<int> probs = {5, 25, 50, 15, 5};
    TableSeating* pObj = new TableSeating();
    clock_t start = clock();
    double result = pObj->getExpected(numTables, probs);
    clock_t end = clock();
    delete pObj;
    double expected = 9.220460327135862;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=274023&rd=7224&pm=4616
********************************************************************************
#include <vector>
using namespace std;
 
#define forIter(I,C) for(typeof((C).end()) I=(C).begin(); I!=(C).end(); ++I)
#define forN(I,C) for(int I=0; I<int(C); ++I)
#define forEach(I,C) for(int I=0; I<int((C).size()); ++I)
typedef vector<int> VI;
 
struct TableSeating
{
    vector<double> pp;
    vector<double> cc;
    double go(int uu, int N)
    {
        if ( cc[uu] >= 0 ) return cc[uu];
        double ret = 0;
        forEach ( i, pp ) {
            if ( !pp[i] ) continue;
            int n = i+1;
            int bb = (1<<n)-1;
            int cnt = 0;
            forN ( s, N-n+1 ) {
                if ( (bb & uu) == 0 ) {
                    ++cnt;
                }
                bb <<= 1;
            }
            if ( !cnt ) {
                continue;
            }
            bb = (1<<n)-1;
            double r = 0;
            forN ( s, N-n+1 ) {
                if ( (bb & uu) == 0 ) {
                    r += go(uu|bb, N);
                }
                bb <<= 1;
            }
            ret += pp[i]*(n+r/cnt);
        }
        return cc[uu] = ret;
    }
    double getExpected(int numTables, VI probs)
    {
        forIter ( i, probs )
            pp.push_back(*i*.01);
        cc.assign(1<<numTables, -1);
        return go(0, numTables);
    }
};

********************************************************************************
*******************************************************************************/