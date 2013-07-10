/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10078
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

class ColumnDiagramPerimeter {
public:
    int getPerimiter(vector<int> a);
};

int ColumnDiagramPerimeter::getPerimiter(vector<int> a) {
    int ret;
    return ret;
}


int test0() {
    vector<int> a = {2, 3, 5, 6, 1};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> a = {3, 2, 1};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> a = {2, 2};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> a = {1, 2, 1};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
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
    vector<int> a = {1, 2, 3};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
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
    vector<int> a = {2, 1, 2};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {50};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1, 50, 1};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2552;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {33};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> a = {27, 50};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {5, 10, 45};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {21, 6, 26, 7};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {1, 29, 20, 22, 24};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {33, 35, 46, 34, 31, 38};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {41, 36, 5, 32, 16, 20, 15};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {18, 40, 37, 35, 21, 32, 7, 15};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {8, 18, 34, 14, 16, 5, 41, 2, 42};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 242;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {48, 19, 45, 49, 6, 21, 6, 5, 13, 50};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 296;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {12, 43, 10, 2, 23, 8, 8, 14, 45, 41, 29};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 224;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {28, 7, 6, 9, 33, 8, 17, 13, 15, 16, 3, 12};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {6, 31, 38, 21, 32, 15, 36, 8, 44, 15, 14, 10, 43};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 304;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {9, 34, 16, 33, 21, 24, 11, 17, 15, 19, 43, 19, 41, 45};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {38, 3, 33, 17, 38, 20, 23, 14, 10, 25, 14, 17, 38, 1, 23};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 336;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {36, 41, 15, 13, 42, 48, 3, 42, 27, 26, 18, 16, 12, 26, 40, 41};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 320;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {11, 17, 49, 5, 46, 32, 35, 24, 4, 38, 8, 48, 28, 36, 20, 12, 28};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 416;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {48, 7, 29, 14, 34, 41, 11, 36, 42, 49, 42, 24, 43, 43, 2, 18, 9, 43};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 444;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {3, 10, 30, 43, 5, 15, 11, 3, 39, 33, 35, 40, 31, 2, 30, 5, 35, 28, 6};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 346;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {1, 41, 44, 26, 41, 16, 33, 18, 5, 29, 21, 30, 8, 31, 33, 26, 21, 18, 11, 31};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 348;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {37, 32, 27, 35, 15, 8, 41, 44, 7, 22, 35, 28, 38, 18, 48, 46, 17, 44, 33, 13, 19};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 406;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {45, 4, 37, 4, 17, 22, 41, 50, 35, 27, 11, 50, 24, 3, 18, 36, 3, 38, 35, 39, 39, 11};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 514;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {37, 7, 49, 31, 43, 43, 4, 16, 50, 16, 10, 40, 32, 29, 50, 28, 14, 38, 25, 46, 14, 10, 41};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 574;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {33, 46, 21, 16, 21, 6, 31, 10, 16, 10, 35, 14, 41, 43, 1, 7, 39, 49, 22, 45, 50, 14, 32, 10};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 508;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {43, 39, 31, 35, 17, 30, 39, 9, 16, 49, 50, 10, 49, 46, 1, 24, 5, 3, 49, 32, 43, 17, 47, 49, 22};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 572;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {8, 24, 23, 48, 21, 29, 17, 31, 17, 24, 49, 27, 35, 11, 20, 35, 6, 13, 41, 19, 42, 25, 21, 18, 5, 22};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 472;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {20, 30, 41, 34, 27, 13, 9, 8, 6, 31, 8, 33, 41, 38, 13, 27, 50, 14, 6, 3, 43, 37, 4, 42, 13, 7, 13};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 494;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {20, 21, 27, 19, 15, 10, 46, 4, 20, 16, 43, 32, 44, 12, 18, 46, 36, 34, 46, 21, 20, 5, 42, 38, 31, 21, 22, 7};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 460;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {22, 46, 40, 40, 46, 5, 43, 7, 46, 19, 8, 17, 42, 36, 2, 24, 34, 16, 31, 6, 48, 50, 50, 48, 16, 10, 12, 32, 10};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 610;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {24, 46, 35, 43, 35, 45, 18, 25, 5, 30, 14, 6, 23, 19, 19, 36, 1, 36, 15, 10, 41, 1, 27, 3, 12, 18, 26, 9, 17, 35};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 602;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {40, 23, 34, 4, 22, 4, 11, 44, 17, 36, 30, 16, 46, 44, 30, 13, 27, 2, 45, 46, 38, 15, 25, 7, 46, 50, 16, 7, 23, 24, 1};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 634;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {46, 21, 17, 36, 48, 13, 28, 39, 50, 30, 35, 14, 4, 49, 3, 12, 29, 48, 25, 27, 24, 11, 47, 29, 6, 30, 31, 4, 15, 30, 27, 19};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 660;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {20, 13, 43, 42, 6, 50, 27, 21, 32, 9, 16, 25, 12, 15, 34, 35, 42, 21, 6, 36, 12, 39, 13, 25, 12, 30, 37, 50, 42, 19, 13, 7, 41};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 650;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {9, 25, 10, 38, 12, 24, 3, 26, 8, 37, 30, 44, 5, 45, 49, 8, 23, 19, 50, 1, 14, 10, 29, 11, 3, 46, 19, 38, 9, 15, 28, 7, 47, 26};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 816;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {22, 20, 11, 26, 8, 45, 44, 22, 4, 5, 7, 33, 25, 10, 17, 1, 45, 29, 23, 10, 3, 21, 34, 48, 20, 39, 36, 29, 49, 9, 12, 4, 36, 39, 24};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 622;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {2, 37, 16, 27, 11, 31, 23, 32, 13, 48, 41, 2, 11, 30, 2, 43, 28, 47, 11, 24, 46, 39, 38, 32, 26, 16, 30, 1, 3, 39, 10, 11, 15, 5, 48, 15};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 742;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {20, 29, 16, 24, 16, 15, 17, 3, 23, 23, 41, 2, 38, 41, 27, 7, 46, 19, 26, 21, 23, 11, 17, 41, 22, 50, 41, 28, 14, 34, 35, 11, 20, 39, 39, 2, 39};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 690;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {30, 31, 24, 34, 28, 50, 35, 18, 43, 9, 12, 16, 22, 45, 1, 39, 15, 41, 35, 49, 10, 42, 21, 14, 22, 21, 22, 35, 13, 50, 42, 10, 7, 44, 32, 10, 36, 29};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 788;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {45, 12, 49, 2, 33, 50, 28, 35, 15, 11, 49, 10, 44, 2, 22, 9, 22, 1, 48, 22, 27, 15, 44, 5, 31, 16, 36, 11, 11, 46, 28, 38, 12, 2, 19, 1, 1, 34, 26};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1006;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {12, 47, 42, 7, 27, 3, 35, 24, 20, 17, 30, 23, 15, 23, 28, 6, 14, 33, 34, 30, 50, 41, 16, 16, 27, 8, 47, 46, 11, 22, 32, 42, 28, 10, 23, 39, 7, 35, 16, 20};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 710;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {50, 20, 18, 37, 2, 39, 10, 39, 26, 24, 29, 42, 31, 47, 32, 20, 50, 4, 47, 8, 22, 37, 14, 47, 20, 2, 18, 10, 28, 39, 45, 41, 40, 27, 15, 18, 17, 2, 2, 32, 23};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 858;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {14, 8, 29, 28, 31, 47, 23, 35, 49, 13, 4, 49, 42, 47, 16, 34, 17, 38, 17, 49, 14, 22, 17, 48, 10, 6, 7, 3, 44, 50, 10, 11, 12, 41, 32, 38, 11, 15, 9, 23, 29, 12};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 782;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {27, 9, 7, 49, 10, 45, 16, 14, 34, 13, 35, 44, 24, 45, 1, 31, 23, 31, 44, 10, 29, 49, 42, 29, 29, 41, 8, 48, 29, 45, 36, 19, 13, 36, 37, 42, 14, 45, 47, 16, 50, 14, 38};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 994;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {35, 35, 4, 19, 49, 28, 40, 36, 8, 1, 29, 7, 47, 32, 1, 25, 30, 3, 44, 48, 1, 38, 39, 20, 15, 39, 34, 45, 41, 50, 41, 14, 31, 18, 14, 32, 14, 33, 11, 25, 24, 33, 1, 39};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 950;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {44, 1, 49, 37, 17, 1, 25, 42, 2, 45, 19, 36, 5, 33, 25, 5, 1, 46, 49, 35, 40, 25, 49, 3, 12, 11, 24, 23, 41, 21, 48, 43, 39, 33, 10, 13, 11, 6, 35, 26, 49, 41, 3, 21, 2};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 966;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> a = {22, 4, 5, 21, 23, 6, 8, 39, 10, 29, 46, 28, 46, 38, 11, 29, 32, 2, 9, 4, 49, 9, 6, 16, 7, 47, 13, 31, 2, 47, 35, 11, 30, 43, 44, 25, 5, 7, 21, 26, 31, 6, 40, 38, 40, 12};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 910;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> a = {13, 12, 44, 7, 39, 32, 28, 21, 23, 47, 30, 18, 49, 43, 49, 13, 31, 28, 3, 40, 33, 17, 46, 19, 25, 44, 36, 47, 11, 50, 10, 50, 32, 12, 25, 36, 41, 29, 4, 48, 9, 6, 37, 19, 49, 28, 5};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1040;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> a = {4, 41, 47, 9, 50, 40, 34, 10, 48, 47, 42, 10, 20, 34, 1, 33, 32, 8, 3, 36, 37, 11, 7, 13, 41, 17, 35, 17, 40, 19, 26, 48, 20, 45, 5, 24, 25, 9, 2, 5, 35, 48, 47, 3, 49, 40, 46, 33};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1022;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> a = {13, 50, 30, 5, 2, 3, 8, 36, 18, 37, 41, 16, 41, 1, 38, 46, 45, 26, 18, 27, 31, 14, 37, 41, 9, 13, 46, 7, 17, 41, 21, 39, 21, 21, 23, 25, 3, 19, 8, 6, 40, 16, 11, 23, 3, 45, 9, 16, 31};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 970;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> a = {43, 31, 44, 3, 47, 10, 41, 48, 19, 21, 29, 18, 25, 38, 48, 24, 4, 36, 37, 47, 9, 6, 14, 4, 28, 25, 14, 28, 13, 30, 31, 16, 1, 9, 21, 17, 39, 34, 42, 25, 9, 29, 3, 38, 50, 10, 30, 24, 26, 7};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 948;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> a = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> a = {2, 1, 2};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> a = {5, 1, 5};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> a = {2, 3, 5, 6, 1};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> a = {5, 3, 5};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
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
    vector<int> a = {1};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> a = {10, 2, 10};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> a = {1, 3, 2, 3};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> a = {1, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> a = {3, 2, 3, 2, 5, 2};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> a = {1, 2, 1, 3, 1, 2};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> a = {5, 2, 5};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> a = {3, 2, 1, 40};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> a = {1, 2, 3, 5, 23, 44, 11, 22, 9, 32, 22};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> a = {2, 1, 3, 2, 3};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> a = {10, 5, 10};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> a = {35, 4, 15};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> a = {3, 2, 3};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> a = {1, 2, 3, 4, 5, 1, 3, 2};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> a = {5, 1, 3, 8, 2, 20, 4};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> a = {5, 3, 5, 2, 3, 5};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> a = {10, 3, 4, 1, 7};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> a = {1, 2, 3, 4, 5, 4, 3, 2, 3, 4, 5, 4, 3, 2, 1};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> a = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> a = {1, 2, 3, 2, 1, 2, 3, 2, 1};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> a = {10};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> a = {1, 5, 2, 12, 2};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> a = {2, 10, 2, 10, 2, 10, 2, 20, 1};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> a = {2, 28, 15, 21, 10, 5, 39, 39, 3, 25};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> a = {1, 5, 2, 4, 5, 6, 7, 1, 2, 4, 6, 5, 2, 4, 6, 7, 8, 8, 5, 3, 3, 3, 5, 6, 7};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> a = {4, 2, 4};
    ColumnDiagramPerimeter* pObj = new ColumnDiagramPerimeter();
    clock_t start = clock();
    int result = pObj->getPerimiter(a);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22718258&rd=13510&pm=10078
********************************************************************************
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <utility>
#include <sstream>
#include <iterator>
#include <numeric>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define sz size()
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define FORE(it,c) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define ALL(c) (c).begin(),(c).end()
#define pb push_back
#define mp make_pair
#define CLR(x,n) memset(x,n,sizeof(x))
 
class ColumnDiagramPerimeter {
public:
  int getPerimiter(vector <int> a) {
    int res = a.size()*2+a[0];
    a.push_back(0);
    for ( int i=1 ; i<a.size() ; ++i ) {
      res += abs(a[i]-a[i-1]);
    }
    return res;
  }
};
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/