/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11631
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

class DengklekTryingToSleep {
public:
    int minDucks(vector<int> ducks);
};

int DengklekTryingToSleep::minDucks(vector<int> ducks) {
    int ret;
    return ret;
}


int test0() {
    vector<int> ducks = {5, 3, 2};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> ducks = {58};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
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
    vector<int> ducks = {9, 3, 6, 4};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
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
    vector<int> ducks = {7, 4, 77, 47, 74, 44};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> ducks = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
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
    vector<int> ducks = {1};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> ducks = {1, 100};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> ducks = {100};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
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
    vector<int> ducks = {95, 35, 24, 43, 73, 38, 12, 41, 44, 100, 89, 36, 26, 39, 34, 74, 83, 68, 16, 19, 93, 60, 67, 48, 86, 33, 2, 50, 97, 80, 29, 92, 85, 71, 23, 17, 42, 70, 98, 65};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> ducks = {33, 97, 7, 87, 46, 8, 23, 18, 73, 95, 10, 16, 72, 22, 75, 1, 92, 82, 81, 70, 36, 27, 90, 55, 85, 84, 9, 34, 31, 93, 45, 42, 29, 63, 28, 51, 21, 35, 71, 49, 44, 79, 26, 52, 57, 64, 62, 68, 77, 24};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> ducks = {59, 99, 13, 42, 67, 32, 40, 37, 95, 22, 88, 1, 19, 77, 45, 74, 60, 83, 16, 93, 3, 65, 87, 33, 52, 6, 73, 39, 8, 41, 12, 21, 46, 25, 58};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> ducks = {44, 77, 20, 49, 27, 99, 91, 59, 79, 9, 50};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> ducks = {59, 30, 41, 54, 67, 76, 40, 93, 15, 95, 18, 60, 98, 36, 38, 34, 62, 49};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> ducks = {78, 32, 60, 25, 42, 80, 41, 10, 20, 1, 18, 75, 23, 61, 54, 34, 26, 53, 2, 85, 49, 36, 88, 4};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> ducks = {86, 12, 88, 33, 54, 68, 56, 11, 21};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> ducks = {60, 58, 81, 79, 27, 10, 80, 95, 38, 22, 48, 78};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> ducks = {40, 73, 51, 67, 92, 45, 36, 87, 69, 80, 23, 47, 82, 94, 61, 29, 68, 17, 54, 48, 5, 96, 1, 93, 42, 34, 100, 85, 70, 26, 22, 24, 78, 77, 20, 49, 4, 9};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> ducks = {75, 97, 22, 19, 11, 47, 74, 39, 24, 94, 20, 2, 28, 62, 40, 96, 67, 33, 23, 79, 44, 35, 12, 53, 57, 37, 9, 72, 6, 17, 13, 68, 16, 34, 51, 26, 30, 43, 8, 70};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> ducks = {44, 21, 62, 85, 6, 58, 12, 99, 76, 52, 45, 80, 86, 78, 94, 70, 17, 71, 59, 88, 81, 29, 3};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> ducks = {49, 38, 59, 53, 60, 35, 99, 18, 23, 90, 10, 76, 58, 46, 2, 92};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> ducks = {84, 76, 95, 18, 65, 64, 7, 30, 38, 66, 72, 56, 25, 93, 51};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> ducks = {36, 11, 100, 79, 42, 15, 64, 34, 72, 87, 66, 53, 13, 52, 74, 22, 44, 48, 71, 46, 68, 18, 69, 60, 6, 97, 39, 93, 96, 8, 20, 31, 12, 32, 81, 86, 5, 63, 76};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> ducks = {66, 71, 60, 70, 34, 37, 87, 93, 9, 56, 22, 63, 62, 51, 47, 85, 12, 4, 17, 3, 32, 74, 19, 24, 29, 11, 48, 75};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> ducks = {9, 56, 87, 29, 93, 64, 88, 84, 91, 61, 11, 58, 72, 94};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> ducks = {41, 81, 34, 59, 92, 10, 78, 75, 69, 53, 5, 49, 36, 83, 48, 100, 26, 98, 3, 24, 7, 64, 72, 15, 18, 61, 70, 27};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> ducks = {59, 87, 31, 85, 92, 48, 29, 72, 1, 15, 50, 96, 73, 100, 53, 98, 42, 39};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> ducks = {47, 12, 10, 30, 95, 44, 88, 81, 72, 55, 65, 48, 76, 27, 43, 31, 70, 60, 49, 87, 96, 5, 24, 4, 86, 89, 40, 61, 94, 37, 34, 45, 98, 7, 85, 71, 92, 64, 79, 21, 29, 51, 23, 33, 16, 41, 53, 35};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> ducks = {2, 81, 68, 44, 20, 21, 35, 57, 37, 9, 56, 45, 42, 43, 58, 91, 72, 19, 41, 94, 23, 60, 6, 63, 39, 40, 70, 31, 59, 92, 50, 65, 76, 36, 53, 8, 80, 61, 27, 71, 67, 32, 48, 66};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> ducks = {10, 97, 23, 89, 76, 9, 43, 59, 71, 6, 51, 19, 29, 11, 68, 48, 66, 44, 18, 26, 40, 30, 41, 61, 49, 57, 92, 79, 64, 69, 88, 86, 21, 80, 17, 50, 35, 28, 94, 70};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> ducks = {66, 13, 52, 23, 96, 31, 1};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> ducks = {83, 95, 33, 73, 40};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> ducks = {67, 58, 18, 53, 9, 90, 64, 28, 34, 92, 13, 36, 30, 14, 7, 54, 75, 43, 45, 82, 91, 25, 95, 35, 65, 11, 31, 3, 16, 79, 99, 19, 2, 96, 63, 50, 20, 49, 98, 85, 56, 73, 32, 4, 24, 87, 76};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> ducks = {100, 20, 83, 27, 6, 46, 29, 31, 55, 5, 9, 4, 51, 41, 99, 47, 10, 36, 66, 22, 43, 8, 71, 37, 50, 13, 28, 62, 30, 54};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> ducks = {61, 39, 68, 38, 16, 23, 41, 63, 43, 13, 77, 52, 89, 10, 98, 26, 55, 24, 51, 47, 44, 12, 67, 49, 75, 11, 64, 50, 87, 62, 79, 45, 5, 25, 80, 6, 73, 19, 76, 71, 91, 90, 29, 78, 81, 40, 21, 15, 92, 46};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> ducks = {78, 69, 75, 62, 24, 32, 15, 48, 4, 55, 100, 31, 49, 58, 18, 39};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> ducks = {95, 8, 33, 36, 91, 55, 45, 61, 71, 20, 100};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> ducks = {68, 26, 14, 64, 37, 72, 56};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> ducks = {63, 36, 79, 42, 78, 9, 65, 98, 54, 12, 60, 25, 96, 39, 11, 45, 47, 56, 6, 49, 31, 35, 81, 18, 100, 62, 75, 73, 80, 84, 17, 68, 88, 53, 10, 14, 85, 3, 34, 5, 82, 27, 43, 59, 69, 97};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> ducks = {40, 52, 29, 22, 88, 98, 51, 99, 57, 34, 74, 9, 87, 3, 76, 46, 94, 5, 42, 58, 32, 44, 21, 7, 64, 73, 86, 90, 62, 18, 12, 37, 66, 4, 78, 25, 8, 27, 69, 30, 65, 35, 16, 31, 47, 38, 81, 10, 45, 1};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> ducks = {22, 29, 37, 88, 20, 25, 41, 9, 66, 53, 65, 59, 80, 57, 71, 40, 60, 56, 6, 2};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> ducks = {34, 75, 3, 24, 66, 57, 96, 59, 36, 69, 56, 97, 95, 31, 2, 93, 51, 87, 40, 20, 22, 26, 86, 39, 28, 49, 77, 62, 79, 58, 38, 92, 19, 30, 18, 81, 88, 65, 41, 100};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> ducks = {17, 26, 22, 38, 13, 29, 10, 12, 32, 30, 11, 51, 70, 95, 40, 52, 66, 45, 81, 35, 91, 41, 99, 5, 33, 76, 58, 56, 73, 92, 77, 98, 19, 90, 8, 83, 100, 7, 46, 63, 36, 89, 67, 43, 84, 65, 3, 69, 15};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> ducks = {42, 90, 7, 84, 44, 5, 25, 22, 28, 26, 40, 10, 11, 41, 9, 21, 69, 100, 94, 62, 68, 27, 92, 35, 77, 46, 17, 18, 72, 51, 29, 4, 60, 50, 12, 83, 55, 82, 98, 15, 88, 45, 47, 14, 79, 70, 30, 39, 37, 56};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> ducks = {77, 80, 70, 74, 22, 76, 17, 42, 5, 85, 21, 11, 47, 97, 24, 67, 56, 68, 4, 66, 30, 71, 65, 45, 83, 86, 87, 40, 32, 28, 44, 88, 27, 38, 82, 51};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> ducks = {32, 27, 45, 73, 63, 37, 26, 39, 88, 56, 65, 13, 85, 61, 51, 57, 95, 94, 21, 2, 29, 90, 77};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> ducks = {40, 21, 18, 59, 73, 23, 2, 61, 92, 90, 69, 5, 29, 57, 91, 47, 95, 6, 93, 49, 36, 15, 75, 25, 99, 32, 67, 71, 53, 11, 46, 87, 33, 52, 28};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> ducks = {99, 6, 1, 14, 16, 49, 17, 98, 85, 28, 94, 74, 70, 42, 88, 11, 25, 87, 35, 67, 83, 23, 95, 82, 76, 77, 64, 30, 100, 97, 32, 5, 55, 57};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> ducks = {56, 29, 33, 76, 60, 75, 22, 4, 45, 36, 37, 73, 67, 19, 14, 57, 69, 95, 25, 34, 78, 20, 44, 61, 90, 85, 80, 71, 59, 99, 72, 16, 9, 52, 7, 53, 3, 27, 77, 46};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> ducks = {67};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> ducks = {18, 93, 12, 24, 40, 72, 90, 71, 64, 11, 53, 70, 98, 83, 4, 76, 85, 54, 91, 58, 88, 89, 75, 6, 43, 48, 28, 45, 46, 66, 8, 34, 99, 59};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> ducks = {43, 65, 79};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> ducks = {36, 84, 93, 46, 80, 54, 74, 28, 88, 41, 4, 29, 85, 62, 75, 100, 71, 48, 68, 58};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> ducks = {10, 8, 30, 32, 78, 84, 46, 81, 87, 55, 92};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> ducks = {93, 14, 13, 98};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> ducks = {54, 94, 48, 60, 78, 80, 71, 66};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> ducks = {60, 22, 89, 25, 93};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> ducks = {3, 33, 53, 51, 67, 14, 7, 6, 5, 57, 24, 100, 97, 59, 29, 22};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> ducks = {61, 54, 39, 10, 2, 23, 36, 95, 97, 66, 6, 67, 93, 45, 94, 91, 29, 19, 78, 84, 72, 80, 98, 64, 1, 74, 26, 96, 51, 57, 14};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> ducks = {1, 7, 8, 2};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> ducks = {7};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> ducks = {58};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> ducks = {2, 12};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> ducks = {1, 3};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> ducks = {7, 4, 77, 47, 74, 44};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> ducks = {3, 2, 9, 4};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
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
    vector<int> ducks = {1};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> ducks = {1, 4};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> ducks = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> ducks = {10, 20};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> ducks = {9, 3, 6, 4};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
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
    vector<int> ducks = {4, 10, 29};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> ducks = {5, 8, 10};
    DengklekTryingToSleep* pObj = new DengklekTryingToSleep();
    clock_t start = clock();
    int result = pObj->minDucks(ducks);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23035808&rd=14725&pm=11631
********************************************************************************
#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
class DengklekTryingToSleep 
{ 
      public: 
             int minDucks(vector<int> ducks) 
             { 
                 sort(ducks.begin(),ducks.end()); 
                 int count=ducks[ducks.size()-1]-ducks[0]+1; 
                 return (count-(ducks.size())); 
                 } 
};

********************************************************************************
*******************************************************************************/