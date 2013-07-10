/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1346
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

class WidgetRepairs {
public:
    int days(vector<int> arrivals, int numPerDay);
};

int WidgetRepairs::days(vector<int> arrivals, int numPerDay) {
    int ret;
    return ret;
}


int test0() {
    vector<int> arrivals = {10, 0, 0, 4, 20};
    int numPerDay = 8;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> arrivals = {0, 0, 0};
    int numPerDay = 10;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
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
    vector<int> arrivals = {100, 100};
    int numPerDay = 10;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> arrivals = {27, 0, 0, 0, 0, 9};
    int numPerDay = 9;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
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
    vector<int> arrivals = {6, 5, 4, 3, 2, 1, 0, 0, 1, 2, 3, 4, 5, 6};
    int numPerDay = 3;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> arrivals = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int numPerDay = 1;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> arrivals = {100};
    int numPerDay = 3;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> arrivals = {99, 0, 0, 0, 0, 0, 0, 0, 0};
    int numPerDay = 20;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> arrivals = {10, 0, 16};
    int numPerDay = 9;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
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
    vector<int> arrivals = {0, 0, 40, 10, 0, 0, 0, 0, 0, 0, 0, 68, 36, 0, 0, 57, 2, 73, 79, 36};
    int numPerDay = 13;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> arrivals = {86, 0, 0, 90, 1, 45, 40, 0, 0, 0, 0, 0, 0, 21, 0, 20, 0, 30, 0, 0};
    int numPerDay = 19;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> arrivals = {0, 0, 5, 0, 0, 31, 0, 2, 0, 0, 0, 0, 0, 14, 3, 30, 56, 28, 0, 40};
    int numPerDay = 16;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> arrivals = {4, 0, 0, 74, 82, 93, 0, 77, 34, 0, 0, 32, 0, 0, 17, 53, 63, 0, 96, 0};
    int numPerDay = 1;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> arrivals = {0, 98, 0, 4, 49, 7, 39, 0, 0, 47, 40, 0, 44, 0, 74, 19, 0, 0, 0, 0};
    int numPerDay = 2;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 211;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> arrivals = {3, 0, 0, 0, 0, 0, 0, 0, 83, 71, 0, 37, 9, 0, 62, 0, 14, 0, 9, 0};
    int numPerDay = 3;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> arrivals = {76, 4, 0, 0, 25, 27, 33, 71, 0, 36, 4, 0, 0, 73, 0, 22, 0, 0, 44, 0};
    int numPerDay = 4;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> arrivals = {0, 0, 0, 20, 0, 34, 0, 0, 0, 0, 0, 19, 83, 69, 71, 0, 0, 0, 0, 0};
    int numPerDay = 5;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> arrivals = {0, 0, 42, 28, 30, 0, 2, 0, 0, 0, 0, 0, 64, 21, 0, 0, 0, 80, 62, 24};
    int numPerDay = 6;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> arrivals = {12};
    int numPerDay = 15;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> arrivals = {55, 0, 7, 0, 25, 0, 67, 8, 0, 45, 29, 0, 38, 0, 45, 0, 0, 0, 21, 16};
    int numPerDay = 8;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> arrivals = {0, 24, 69, 0, 42, 0, 0, 0, 75, 0, 0};
    int numPerDay = 9;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> arrivals = {79, 0, 86, 0, 0, 41, 0, 95, 29, 0, 84};
    int numPerDay = 14;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> arrivals = {32, 30, 0, 0, 0, 0, 0, 46, 8, 0, 92};
    int numPerDay = 18;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> arrivals = {5, 5, 5, 5};
    int numPerDay = 20;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
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
    vector<int> arrivals = {1, 2, 0, 0, 10, 15};
    int numPerDay = 5;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> arrivals = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int numPerDay = 10;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> arrivals = {44, 44, 44, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 5};
    int numPerDay = 25;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> arrivals = {100, 100, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 4, 5, 3};
    int numPerDay = 10;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> arrivals = {0, 0, 0};
    int numPerDay = 10;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> arrivals = {2, 0, 0, 4};
    int numPerDay = 3;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
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
    vector<int> arrivals = {5, 3, 6, 2, 4, 1, 6, 5, 5};
    int numPerDay = 2;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> arrivals = {100};
    int numPerDay = 3;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> arrivals = {99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99};
    int numPerDay = 1;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 1881;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> arrivals = {20};
    int numPerDay = 8;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> arrivals = {0, 10};
    int numPerDay = 8;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> arrivals = {5, 4};
    int numPerDay = 3;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
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
    vector<int> arrivals = {12, 8, 0, 4, 20};
    int numPerDay = 10;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
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
    vector<int> arrivals = {9, 7, 0, 9};
    int numPerDay = 8;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> arrivals = {0, 0, 0, 0, 0, 0, 0, 1};
    int numPerDay = 1;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> arrivals = {4, 4, 4, 4};
    int numPerDay = 4;
    WidgetRepairs* pObj = new WidgetRepairs();
    clock_t start = clock();
    int result = pObj->days(arrivals, numPerDay);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7290949&rd=4555&pm=1346
********************************************************************************
#include <string> 
#include <vector> 
#include <iostream> 
#include <sstream> 
#include <ext/algorithm> 
#include <ext/numeric> 
using namespace std; 
using namespace __gnu_cxx; 
class WidgetRepairs 
{ 
public: 
  int days(vector <int> arrivals, int numPerDay); 
// {{{ 
   
 
// }}} 
}; 
 
int WidgetRepairs::days(vector <int> arrivals, int numPerDay) 
{ 
  int numPending = 0; 
  int running = 0; 
   
  for(int i=0; i<arrivals.size(); i++) 
  { 
    numPending += arrivals[i]; 
     
    if(numPending > 0) { 
      numPending -= numPerDay; 
      if(numPending<0) numPending = 0; 
      running++; 
    } 
  } 
  while(numPending > 0) { 
    numPending -= numPerDay; 
    running++; 
  } 
   
  return running; 
} 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/