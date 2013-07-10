/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2387
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

class DiskScheduler {
public:
    int optimize(int start, vector<int> sectors);
};

int DiskScheduler::optimize(int start, vector<int> sectors) {
    int ret;
    return ret;
}


int test0() {
    int start = 5;
    vector<int> sectors = {6, 8, 65, 71};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int start = 5;
    vector<int> sectors = {55, 65, 71};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int start = 20;
    vector<int> sectors = {1, 21, 99};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int start = 99;
    vector<int> sectors = {55, 56, 61, 70, 76, 78, 80, 83, 84, 90, 1, 4, 6, 26, 27, 33, 38, 46, 47, 49};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int start = 42;
    vector<int> sectors = {10, 11, 29, 30, 34, 35, 36, 38, 40, 41, 46, 48, 65, 73, 79, 80, 85, 91, 96, 97};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int start = 15;
    vector<int> sectors = {8, 16, 18, 44, 62, 68, 78, 88, 92, 99};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int start = 98;
    vector<int> sectors = {4, 13, 16, 21, 26, 80, 81, 86, 87, 99};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
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
    int start = 34;
    vector<int> sectors = {8, 20, 27, 35, 88};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int start = 93;
    vector<int> sectors = {22, 25, 72, 12, 46, 40, 34, 45, 43, 37, 100, 24, 26, 3, 14, 7, 96, 47, 90, 30, 61, 66, 27, 94, 85, 44, 65, 74, 36, 98, 2, 80, 51, 35, 68, 79, 10, 48, 63, 15, 97, 57, 49, 20, 89, 50, 78, 91, 19};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int start = 16;
    vector<int> sectors = {12, 60, 30, 50, 69, 51, 68, 59, 22, 61, 46, 98, 54, 38, 20, 41, 18, 31, 70, 13, 5, 37, 48, 73, 58, 52, 77, 17, 23, 14, 15, 81, 96, 6, 84, 29, 36, 43, 21, 89, 79, 10, 87, 32, 66, 65, 90, 92, 67};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int start = 27;
    vector<int> sectors = {15, 6, 25, 78, 61, 26, 30, 41, 97, 2, 90, 24, 65, 7, 96, 68, 4, 52, 69, 98, 75, 21, 84, 59, 29, 74, 53, 88, 17, 89, 95, 39, 56, 81, 5, 67, 42, 82, 94, 22, 60, 18, 93, 44, 92, 91, 54, 3, 76, 51};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int start = 96;
    vector<int> sectors = {46, 56, 15, 41, 86, 64, 19, 58, 18, 97, 14, 32, 89, 54, 71, 36, 95, 20, 6, 76, 60, 12, 3, 73, 93, 55, 57, 10, 94, 77, 79, 26, 92, 9, 11, 90, 83, 27, 70, 69, 45, 63, 42, 98, 47, 62, 25, 44, 28, 51};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int start = 64;
    vector<int> sectors = {52, 27, 9, 79, 20, 15, 39, 89, 5, 96, 75, 2, 91, 18, 74, 43, 41, 30, 100, 94, 35, 65, 42, 93, 50, 72, 19, 23, 81, 4, 66, 22, 78, 88, 36, 83, 7, 26, 47, 51, 80, 21, 32, 92, 77, 24, 28, 16, 49, 90};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int start = 79;
    vector<int> sectors = {54, 42, 8, 7, 50, 9, 77, 73, 10, 4, 34, 60, 1, 100, 18, 33, 29, 52, 15, 38, 3, 35, 43, 68, 45, 30, 48, 6, 57, 46, 12, 11, 13, 2, 40, 65, 72, 32, 59, 23, 92, 31, 55, 49, 63, 58, 16, 47, 75, 67};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int start = 44;
    vector<int> sectors = {66, 5, 69, 93, 18, 90, 64, 3, 87, 63, 79, 83, 62, 14, 25, 24, 31, 70, 27, 68, 23, 20, 72, 21, 75, 6, 49, 73, 81, 60, 1, 8, 86, 77, 30, 97, 82, 55, 17, 48, 4, 45, 51, 43, 9, 28, 67, 91, 16, 54};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int start = 71;
    vector<int> sectors = {17, 82, 34, 94, 8, 29, 10, 30, 33, 48, 21, 79, 11, 80, 31, 52, 20, 85, 84, 78, 14, 27, 13, 3, 83, 73, 50, 41, 90, 100, 1, 23, 77, 39, 22, 9, 60, 40, 32, 18, 42, 35, 26, 92, 15, 7, 86, 58, 49, 76};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int start = 46;
    vector<int> sectors = {89, 100, 2, 12, 85, 10, 29, 15, 86, 98, 9, 93, 71, 27, 44, 7, 37, 70, 34, 45, 1, 67, 24, 33, 11, 25, 63, 84, 42, 28, 32, 8, 14, 39, 96, 99, 30, 64, 5, 36, 90, 66, 20, 77, 62, 16, 69, 76, 95, 23};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int start = 2;
    vector<int> sectors = {90, 27, 26, 71, 67, 28, 45, 46, 39, 47, 15, 76, 65, 81, 59, 52, 78, 86, 56, 74, 22, 12, 13, 57, 92, 41, 31, 50, 38, 14, 88, 61, 33, 21, 84, 53, 29, 85, 32, 70, 62, 49, 19, 58, 44};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int start = 14;
    vector<int> sectors = {16, 67, 34, 75, 15, 98, 53, 56, 80, 42, 82, 95, 97, 41, 72, 1, 70, 11, 57, 48, 44, 45, 61, 37, 86, 90, 99, 8, 88, 69, 4, 77, 49, 7, 65, 93, 47, 83, 51, 79, 74, 94, 85, 58, 3};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int start = 84;
    vector<int> sectors = {48, 4, 7, 41, 60, 22, 37, 23, 12, 61, 97, 100, 49, 24, 34, 6, 56, 51, 42, 14, 43, 25, 13, 3, 36, 46, 54, 26, 50, 45, 35, 88, 57, 93, 63};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int start = 26;
    vector<int> sectors = {75, 9, 20, 86, 60, 92, 52, 70, 10, 64, 14, 100, 55, 21, 4, 72, 56, 95, 13, 81, 6, 54, 97, 62, 22, 58, 82, 51, 53, 84, 17, 88, 49, 25, 16};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int start = 83;
    vector<int> sectors = {37, 21, 42, 30, 40, 43, 45, 60, 52, 69, 13, 19, 16, 39, 59, 23, 66, 32, 80, 33, 76, 25, 71, 41, 79, 64, 48, 70, 18, 20};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int start = 41;
    vector<int> sectors = {92, 1, 48, 69, 43, 47, 90, 3, 88, 84, 80, 49, 11, 59, 70, 65, 5, 85, 44, 7, 56, 62, 58, 100, 72, 94, 46, 93, 81, 15};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int start = 46;
    vector<int> sectors = {69, 97, 51, 58, 87, 10, 73, 5, 96, 4, 60, 91, 12, 63, 74, 66, 13, 80, 76, 11, 92, 79, 68, 49, 85};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int start = 100;
    vector<int> sectors = {58, 1, 24, 64, 26, 59, 33, 55, 2, 31, 61, 65, 51, 30, 22, 17, 3, 6, 5, 53, 38, 42, 15, 52, 9};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int start = 59;
    vector<int> sectors = {31, 30, 52, 13, 54, 6, 43, 5, 49, 57, 18, 99, 16, 27, 46, 20, 15, 29, 1, 38};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int start = 56;
    vector<int> sectors = {100, 75, 79, 72, 82, 87, 83, 98, 95, 3, 6, 92, 62, 60, 58, 94, 86, 78, 14, 18};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int start = 23;
    vector<int> sectors = {64, 72, 11, 61, 68, 89, 80, 2, 16, 81, 1, 3, 66, 96, 20, 87, 95, 59, 92, 90};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int start = 64;
    vector<int> sectors = {40, 19, 7, 42, 6, 17, 33, 56, 35, 2, 28, 30, 23, 60, 62, 43, 50, 11, 18, 46};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int start = 42;
    vector<int> sectors = {99, 83, 43, 57, 45, 49, 87, 77, 65, 70, 2, 1, 74, 59, 69, 53, 73, 85, 75, 52};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int start = 72;
    vector<int> sectors = {19, 82, 23, 15, 25, 73, 26, 7, 13, 22, 3, 28, 99, 20, 8, 94, 4, 78, 74, 90};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int start = 1;
    vector<int> sectors = {100};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int start = 100;
    vector<int> sectors = {1};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int start = 56;
    vector<int> sectors = {55};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int start = 56;
    vector<int> sectors = {57};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int start = 1;
    vector<int> sectors = {50};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int start = 1;
    vector<int> sectors = {51};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int start = 1;
    vector<int> sectors = {52};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int start = 100;
    vector<int> sectors = {1, 91, 20};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int start = 1;
    vector<int> sectors = {2, 3, 100};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
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

int test40() {
    int start = 16;
    vector<int> sectors = {55, 65, 66, 1, 100, 72, 64, 96, 18, 14, 10, 11, 17, 99};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int start = 1;
    vector<int> sectors = {2, 4, 8, 16, 95};
    DiskScheduler* pObj = new DiskScheduler();
    clock_t start = clock();
    int result = pObj->optimize(start, sectors);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9958600&rd=5069&pm=2387
********************************************************************************
#line 5 "DiskScheduler.cpp" 
 
#include <algorithm> 
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <string> 
#include <utility> 
#include <stdio.h> 
#include <iostream> 
#include <sstream> 
#include <math.h> 
 
#ifdef _MSC_VER 
typedef _int64 int64; 
#else 
typedef long long int64; 
#endif 
 
using namespace std; 
 
typedef vector<int> VI;     typedef vector<VI> VVI; 
typedef vector<string> VS;  typedef vector<VS> VVS; 
typedef vector<double> VD; 
typedef pair<int, int> PII; 
typedef pair<double, double> PDD; 
 
const double Eps = 1E-10; 
 
#define ALL(cont) (cont).begin(), (cont).end() 
#define FORV(vector, var) for (int var = 0; var < (int) (vector).size(); ++var) 
#define REP(var, n) for (int var = 0; var < (n); ++i) 
#define pb push_back 
 
template<class T> T gcd(T a, T b) { while (b) { a%=b; swap(a, b); } return a; } 
 
const string LALPHA = "abcdefghijklmnopqrstuvwxyz"; 
const string UALPHA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
const string DIGITS = "0123456789"; 
const string DELIM = " \t\n\r"; 
 
enum AddPatt { NOTPATT = 1, PATT = 3, BOTH = 2 }; 
// splits s into substrings each of which consists solely from chars from patt or 
//  not from patt and returns those as indicated by add. 
VS split(const string& s, const string& patt = DELIM, AddPatt add = NOTPATT) { 
  VS res; 
  if (s.length() == 0) 
    return res; 
  bool inpatt = patt.find(s[0]) != patt.npos; 
  size_t st = 0; 
  for (size_t i = 1; i < s.length(); ++i) { 
    if ((patt.find(s[i]) != patt.npos) != inpatt) { 
      if ((inpatt && add >= 2) || (!inpatt && add <= 2)) 
        res.push_back(s.substr(st, i-st)); 
      inpatt = !inpatt; 
      st = i; 
    } 
  } 
  if ((inpatt && add >= 2) || (!inpatt && add <= 2)) 
    res.push_back(s.substr(st)); 
  return res; 
} 
 
string tolower(string s) { 
  string res; FORV(s, i) res += tolower(s[i]); return res; 
} 
 
//////////////////////////////////////////////////////////////////////////////////////// 
 
class DiskScheduler { 
  public: 
    VI d; 
 
    int sweep(int pos, int incr, int num) { 
      int cnt = 0; 
      while (num) { 
        if (d[pos] == 1) 
          --num; 
        pos += incr; 
        ++cnt; 
      } 
      return cnt; 
    } 
 
  int optimize(int start, vector <int> sectors) { 
    d.resize(400); 
    FORV(d, i) d[i] = 0; 
    FORV(sectors, i) { 
      d[sectors[i]] = 1; 
      d[sectors[i] + 100] = 1; 
      d[sectors[i] + 200] = 1; 
    } 
     
    int res = sweep(start + 100, 1, sectors.size()); 
    res = min(res, sweep(start + 100, -1, sectors.size())); 
    REP(i, 100) { 
      int cnt = 0; 
      for (int j = 0; j <= i; ++j) { 
        if (d[start+100+j] == 1) 
          ++cnt; 
      } 
      res = min(res, 2*i + sweep(start+100, -1, sectors.size() - cnt)); 
 
      cnt = 0; 
      for (int j = 0; j <= i; ++j) { 
        if (d[start+100-j] == 1) 
          ++cnt; 
      } 
      res = min(res, 2*i + sweep(start+100, 1, sectors.size() - cnt)); 
    } 
 
    return res - 1; 
  } 
 
   
 
}; 
 
  
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/