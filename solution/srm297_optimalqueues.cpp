/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6169
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

class OptimalQueues {
public:
    int minWaitingTime(vector<int> clientArrivals, int tellerCount, int serviceTime);
};

int OptimalQueues::minWaitingTime(vector<int> clientArrivals, int tellerCount, int serviceTime) {
    int ret;
    return ret;
}


int test0() {
    vector<int> clientArrivals = {1, 2};
    int tellerCount = 1;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> clientArrivals = {10};
    int tellerCount = 50;
    int serviceTime = 50;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> clientArrivals = {10, 10, 10};
    int tellerCount = 2;
    int serviceTime = 20;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> clientArrivals = {2, 4, 6, 3, 5};
    int tellerCount = 3;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> clientArrivals = {74, 65, 82, 31, 10, 64, 28, 24, 65, 56};
    int tellerCount = 5;
    int serviceTime = 8;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> clientArrivals = {86};
    int tellerCount = 50;
    int serviceTime = 14;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> clientArrivals = {37, 54, 59, 68, 99, 34, 78, 99, 53, 59, 66, 76, 96, 97, 79, 95, 88, 50, 72, 84, 9, 6, 44, 37, 18, 32, 54, 54, 86, 35, 30, 93, 47, 97, 15, 82, 17, 20, 15, 40, 75, 34, 75, 31, 73, 40, 52, 35, 60, 44};
    int tellerCount = 1;
    int serviceTime = 100;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5006;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> clientArrivals = {18, 42, 28, 18, 15, 19, 99, 70, 37, 69, 47, 41, 38, 15, 48, 62, 86, 47, 35, 28, 62, 73, 83, 92, 79, 49, 18, 45, 25, 64, 28, 66, 86, 40, 99, 62, 52, 22, 70, 53, 87, 69, 53, 76, 94, 5, 20, 97, 50, 25};
    int tellerCount = 50;
    int serviceTime = 31;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> clientArrivals = {53, 47, 23, 33, 7, 39, 10, 88, 94, 18, 50, 0, 99, 60, 42, 82, 22, 93, 43, 13};
    int tellerCount = 3;
    int serviceTime = 89;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 630;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> clientArrivals = {20, 64, 82, 70, 7, 87, 19, 25, 32, 43, 68, 29, 68, 64, 8, 86, 71, 10, 55, 76, 66, 15, 91, 32, 79, 21, 31, 16, 12, 93, 77, 11, 96, 37, 40, 33, 62, 50, 89, 77, 69, 66, 97, 19, 41, 59, 40, 75, 20, 47};
    int tellerCount = 18;
    int serviceTime = 57;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> clientArrivals = {64, 62, 56, 3, 47, 46, 52, 98, 54, 75, 89, 56, 27, 19};
    int tellerCount = 4;
    int serviceTime = 22;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> clientArrivals = {8, 84, 72, 15, 59, 62, 14, 30, 65, 44, 3, 100, 25, 23, 12, 76, 8, 53, 5, 39, 31, 42, 93, 47, 7, 52, 35, 69, 71, 73, 16, 32, 29, 38, 93, 42, 45, 21, 25};
    int tellerCount = 6;
    int serviceTime = 93;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 658;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> clientArrivals = {0, 62, 60, 79, 94, 86, 30, 86, 83, 94, 41, 56, 56, 20, 72, 41, 92, 80, 73, 38, 57, 55, 76, 4, 42, 41, 0, 22};
    int tellerCount = 9;
    int serviceTime = 15;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> clientArrivals = {19, 90};
    int tellerCount = 1;
    int serviceTime = 92;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 203;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> clientArrivals = {85, 75, 0, 27, 60, 29};
    int tellerCount = 3;
    int serviceTime = 74;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> clientArrivals = {95, 74, 31, 18, 53, 6, 79, 54, 25, 54, 9};
    int tellerCount = 5;
    int serviceTime = 100;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 306;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> clientArrivals = {44, 52, 58, 57, 41, 41, 2, 50, 23, 98, 45, 28, 92, 17, 11, 11, 45, 54, 55, 100, 30, 99, 27, 95, 90, 74, 41, 8, 63, 10, 37, 64, 93, 81, 19};
    int tellerCount = 15;
    int serviceTime = 77;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
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
    vector<int> clientArrivals = {59, 77};
    int tellerCount = 1;
    int serviceTime = 23;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> clientArrivals = {71, 73};
    int tellerCount = 2;
    int serviceTime = 9;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> clientArrivals = {67, 85, 12, 1, 32, 99, 55, 56, 51, 97, 85, 24, 85, 81, 99, 29, 47, 18, 68, 95, 36, 22, 88, 43, 20, 30, 41, 38, 20, 25, 16, 66, 13, 54, 41, 96, 77, 18, 67, 74, 14, 44, 33, 98, 31, 20};
    int tellerCount = 30;
    int serviceTime = 13;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> clientArrivals = {22, 85, 41, 82, 78, 78, 11, 37, 77, 25, 18, 71, 42, 93, 31, 98, 92, 56, 84, 77, 55, 61, 60, 65, 38, 93, 86, 42, 56, 90, 72, 75, 59};
    int tellerCount = 48;
    int serviceTime = 17;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> clientArrivals = {30, 11, 38, 79, 98};
    int tellerCount = 1;
    int serviceTime = 72;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 371;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> clientArrivals = {92, 1, 12, 66, 100, 8, 7, 26, 26, 84, 77, 70, 75, 19, 83, 40, 92, 39, 87, 97, 93, 54, 42, 32, 33, 33, 35, 73, 78, 56, 26, 28, 42, 79, 15, 56, 91, 8, 96, 10, 69, 44, 28, 34, 58};
    int tellerCount = 1;
    int serviceTime = 42;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1891;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> clientArrivals = {87, 9, 35, 60, 35, 89, 91, 51, 95, 24, 36, 30, 88, 65, 97, 17, 25, 38, 24, 13, 9, 86, 36, 25, 56, 59, 92, 68, 37, 78, 43, 55, 61, 42, 85, 38, 8, 48, 78, 66, 94, 95, 96, 27, 49, 1, 48};
    int tellerCount = 12;
    int serviceTime = 32;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> clientArrivals = {66, 50, 41, 37, 47, 70, 83, 24, 67, 43, 66, 82, 11, 5, 89, 37, 3, 53, 50, 21, 99, 42, 51, 83, 33, 76, 98, 14, 40, 24};
    int tellerCount = 2;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> clientArrivals = {1, 41, 90, 47, 66, 31, 66, 34, 63, 7, 0, 17, 95, 71, 58, 15, 69, 28, 32, 33, 4, 44, 0, 70, 18, 48, 88, 79, 18, 18, 71, 6};
    int tellerCount = 11;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> clientArrivals = {42, 78, 3, 11, 64, 52, 78, 87, 27, 62, 82, 8, 83, 2, 73, 76, 39, 78, 37, 34, 60, 7, 39, 4, 77, 62, 14, 86, 41, 84, 24, 97, 95, 48, 98, 23, 47, 8, 99, 43, 9, 43, 27, 46, 83, 30, 19};
    int tellerCount = 3;
    int serviceTime = 25;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 403;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> clientArrivals = {83, 68, 24, 28, 9};
    int tellerCount = 5;
    int serviceTime = 9;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> clientArrivals = {3, 47, 50, 70, 83, 83, 31, 13, 49, 84, 21, 52, 86, 15, 2, 97, 88, 22, 75, 13, 65, 72, 38, 81, 28, 34, 32};
    int tellerCount = 13;
    int serviceTime = 27;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> clientArrivals = {8, 25, 89, 97, 32, 58, 65, 75, 66, 79, 63, 54, 48, 38, 5, 32, 70};
    int tellerCount = 6;
    int serviceTime = 4;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> clientArrivals = {92, 72, 53, 74, 94, 64, 47, 80, 30, 15, 33, 25, 92, 92, 93, 58, 62, 97, 72, 55, 93, 61, 72, 87, 13, 58, 75, 61, 5, 59, 93, 71, 19, 99, 78, 85, 100, 35, 96, 54, 61, 61, 6, 1, 47, 69, 9, 34};
    int tellerCount = 37;
    int serviceTime = 59;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> clientArrivals = {53, 67, 23, 86, 60, 85, 45, 29, 40, 11, 79, 85, 20, 92, 29, 18, 88, 40, 97, 83, 14, 5, 82, 93, 6, 81, 28, 99, 11, 20, 17, 23, 36, 1, 46, 66, 2, 0, 18, 65};
    int tellerCount = 17;
    int serviceTime = 89;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 278;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> clientArrivals = {66, 38, 75, 25, 66, 32, 38, 76, 27, 65, 66, 81, 54, 10, 73, 93, 78, 25, 72, 58, 23, 43, 66, 64, 78, 49, 7, 83, 93, 37, 66, 63, 62, 69, 51, 51, 81, 52, 43, 78, 93, 10, 37, 56, 30, 59, 70};
    int tellerCount = 31;
    int serviceTime = 38;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> clientArrivals = {26, 73, 72, 87, 17, 3, 19, 35, 84, 87, 94, 86, 49, 76, 73};
    int tellerCount = 9;
    int serviceTime = 73;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> clientArrivals = {55, 55, 47, 83, 17, 8, 94, 50, 71, 0, 80, 4, 19, 31, 40, 16, 37, 95, 37, 36, 85, 95, 49, 94, 19, 9, 37, 73};
    int tellerCount = 21;
    int serviceTime = 36;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> clientArrivals = {51, 83, 9, 1, 61, 61, 93, 74, 36, 49, 84, 92, 56, 11, 15, 59, 60, 10, 47, 14, 13, 10, 74, 21, 33, 18, 86, 5, 30, 98, 8, 85, 13, 18, 92, 19, 17, 56, 34, 18, 76, 47, 33};
    int tellerCount = 15;
    int serviceTime = 36;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> clientArrivals = {8, 41, 27, 73, 57, 52, 80, 2, 33, 94, 79, 12, 79, 63, 42, 25, 10, 1, 74, 88, 59, 24, 7, 71, 65, 99, 48, 61, 93, 34, 91, 27};
    int tellerCount = 7;
    int serviceTime = 29;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> clientArrivals = {73, 85, 90, 29};
    int tellerCount = 3;
    int serviceTime = 7;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> clientArrivals = {18, 38, 8, 49, 96, 27, 53, 53, 11, 83, 35, 78, 24, 20, 75, 15, 3, 34, 10, 35, 88, 24, 24, 70, 73, 16, 27, 84, 36, 45, 55, 66, 34, 26, 62, 82, 92};
    int tellerCount = 9;
    int serviceTime = 28;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> clientArrivals = {30, 7, 46, 10, 81, 1, 92, 18, 21};
    int tellerCount = 10;
    int serviceTime = 69;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> clientArrivals = {64, 11, 16, 58};
    int tellerCount = 10;
    int serviceTime = 95;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> clientArrivals = {35, 92, 14, 25, 14, 55, 77, 75, 49, 14, 83, 22, 57, 3, 92};
    int tellerCount = 1;
    int serviceTime = 99;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1488;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> clientArrivals = {93, 5, 61, 89, 94, 1, 64, 96, 51, 98, 36, 18, 97, 89, 63, 38, 100, 96, 71, 66, 10, 28, 9, 68, 67, 37, 72, 5, 82, 92, 63, 51, 23, 65, 83, 7, 57, 52, 59, 51, 41, 39, 100, 32, 46, 99, 48, 90};
    int tellerCount = 5;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> clientArrivals = {70, 41, 35, 47, 77, 17, 20};
    int tellerCount = 7;
    int serviceTime = 81;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> clientArrivals = {35, 0, 49, 8, 75, 72, 95, 9, 60, 95, 61, 48, 88, 49, 17, 53, 26, 43, 83, 7, 45, 53, 14, 41, 63, 76, 64, 10};
    int tellerCount = 6;
    int serviceTime = 53;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 274;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> clientArrivals = {63, 28, 44, 12, 66, 62, 38, 67, 2, 60, 19, 57, 50, 65, 75, 13, 36, 7, 60, 43, 20, 43, 100, 75, 38, 68, 99, 69, 56, 92, 2, 54, 56, 76, 69, 87, 94, 78, 11, 54, 65, 6, 49, 61, 86, 71, 76, 53};
    int tellerCount = 2;
    int serviceTime = 67;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1610;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> clientArrivals = {18, 96, 85, 0, 43};
    int tellerCount = 6;
    int serviceTime = 42;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> clientArrivals = {91, 92, 2, 85, 23, 89, 75, 58, 88, 47, 44, 56, 33, 35, 74, 99, 39, 100, 76, 65, 83, 34, 72, 52};
    int tellerCount = 8;
    int serviceTime = 20;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> clientArrivals = {39, 30, 23, 26, 92, 81, 35, 80, 98, 84, 39, 73, 31, 27, 52, 82};
    int tellerCount = 10;
    int serviceTime = 91;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 217;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> clientArrivals = {36};
    int tellerCount = 4;
    int serviceTime = 16;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> clientArrivals = {6, 60, 29, 43, 2, 47, 55, 66, 1, 92, 77, 47, 100, 16, 97, 73, 10, 85, 52, 22, 19, 41, 91, 63, 63, 88, 53, 18, 46, 39, 62, 90, 39, 19, 18, 93, 21, 16, 41, 31, 21, 15, 61};
    int tellerCount = 7;
    int serviceTime = 21;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> clientArrivals = {69, 48, 77, 93, 33, 69, 75, 38, 42};
    int tellerCount = 9;
    int serviceTime = 12;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> clientArrivals = {100, 5, 19, 24, 36, 96, 48, 67, 13, 37, 53, 33, 68, 79, 32, 87, 1, 29, 34, 46, 68, 87, 16, 47, 80, 25, 55, 25, 23, 64, 3, 70, 77, 36, 62, 99, 62, 72, 62, 60, 69, 91, 0, 86, 97};
    int tellerCount = 3;
    int serviceTime = 21;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 318;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> clientArrivals = {46, 82, 30, 25, 58, 73, 56, 1, 96, 28, 62, 42, 83, 5, 36, 97, 57, 43, 14, 30, 24, 94, 65, 9, 15, 23, 100, 74, 74, 81, 85, 73, 27};
    int tellerCount = 5;
    int serviceTime = 42;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 303;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> clientArrivals = {80, 43, 60, 76, 79, 52, 41, 75, 33, 28, 84, 21, 40, 83, 88, 76, 47, 58, 38, 23, 65, 44, 31, 11, 12, 40, 62, 56, 70, 88, 99, 36, 44, 42, 4, 55, 20};
    int tellerCount = 4;
    int serviceTime = 46;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 464;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> clientArrivals = {28, 29, 88, 1, 56, 71, 39, 55, 42, 34, 26, 15, 36, 58, 34, 70, 20, 21, 88, 60, 50, 7, 34, 72, 0, 22, 13, 39, 44, 48, 33, 63, 77, 39, 92, 82, 38};
    int tellerCount = 9;
    int serviceTime = 82;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 410;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> clientArrivals = {1, 50, 10, 49, 58, 79, 51};
    int tellerCount = 6;
    int serviceTime = 58;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> clientArrivals = {11, 74, 85, 79, 9};
    int tellerCount = 8;
    int serviceTime = 80;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> clientArrivals = {71, 14, 76, 53, 11, 29, 68, 84, 54, 34, 95, 84, 37, 30, 32, 64, 2, 2, 29, 91, 52, 25, 80, 90, 49, 34, 0, 27, 11, 0, 78, 62, 87, 61, 85, 23, 19, 73, 17, 29, 13, 71, 52, 94, 57};
    int tellerCount = 6;
    int serviceTime = 27;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> clientArrivals = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int tellerCount = 1;
    int serviceTime = 100;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5100;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> clientArrivals = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int tellerCount = 50;
    int serviceTime = 100;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> clientArrivals = {2, 4, 6, 3, 5};
    int tellerCount = 3;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> clientArrivals = {100, 1};
    int tellerCount = 1;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> clientArrivals = {0, 100, 27, 33, 45};
    int tellerCount = 3;
    int serviceTime = 13;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> clientArrivals = {10, 100, 5, 20};
    int tellerCount = 2;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> clientArrivals = {1, 2, 3, 4, 5};
    int tellerCount = 3;
    int serviceTime = 86;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 174;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> clientArrivals = {100, 1};
    int tellerCount = 1;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> clientArrivals = {0, 1, 2, 3, 4, 5};
    int tellerCount = 3;
    int serviceTime = 17;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> clientArrivals = {12, 14, 17, 19, 21, 24};
    int tellerCount = 4;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> clientArrivals = {1, 2, 4, 8};
    int tellerCount = 2;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> clientArrivals = {0, 0};
    int tellerCount = 1;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> clientArrivals = {2, 3, 4, 3};
    int tellerCount = 2;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> clientArrivals = {5, 2, 3, 4, 5};
    int tellerCount = 2;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> clientArrivals = {100, 99, 3, 1};
    int tellerCount = 2;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> clientArrivals = {2, 3};
    int tellerCount = 2;
    int serviceTime = 15;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> clientArrivals = {10, 20, 80, 90, 100};
    int tellerCount = 2;
    int serviceTime = 45;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> clientArrivals = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int tellerCount = 50;
    int serviceTime = 8;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> clientArrivals = {1, 2};
    int tellerCount = 2;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> clientArrivals = {1, 2, 6};
    int tellerCount = 2;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> clientArrivals = {0, 0, 0, 10, 100};
    int tellerCount = 1;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> clientArrivals = {1, 2, 3, 10, 11, 12, 22, 23, 24, 39, 40};
    int tellerCount = 3;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> clientArrivals = {100, 9, 8, 7, 6, 5, 4};
    int tellerCount = 5;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> clientArrivals = {100, 1, 1, 1, 1, 1, 1, 1, 1};
    int tellerCount = 1;
    int serviceTime = 5;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> clientArrivals = {22, 50, 2, 1, 12, 23, 51, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 7, 9, 7, 78, 6, 5, 8, 5, 6, 3, 4, 34, 11};
    int tellerCount = 4;
    int serviceTime = 7;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> clientArrivals = {0, 100};
    int tellerCount = 1;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> clientArrivals = {98, 99, 97, 89, 88, 74};
    int tellerCount = 3;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> clientArrivals = {100, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int tellerCount = 3;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> clientArrivals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100};
    int tellerCount = 2;
    int serviceTime = 2;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> clientArrivals = {1, 17, 21};
    int tellerCount = 2;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> clientArrivals = {100, 99, 1};
    int tellerCount = 2;
    int serviceTime = 5;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> clientArrivals = {1, 2, 3, 4, 5, 6, 7, 8};
    int tellerCount = 2;
    int serviceTime = 20;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> clientArrivals = {1, 20, 21};
    int tellerCount = 1;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> clientArrivals = {10, 20, 10, 10};
    int tellerCount = 2;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
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
    vector<int> clientArrivals = {6, 6, 6, 6, 6, 1};
    int tellerCount = 5;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> clientArrivals = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int tellerCount = 1;
    int serviceTime = 100;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5000;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> clientArrivals = {1, 7, 15, 27};
    int tellerCount = 10;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> clientArrivals = {1, 10, 10};
    int tellerCount = 1;
    int serviceTime = 2;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> clientArrivals = {1, 2, 3, 50};
    int tellerCount = 2;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> clientArrivals = {1, 2, 3};
    int tellerCount = 1;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> clientArrivals = {1, 30};
    int tellerCount = 1;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> clientArrivals = {1, 1, 1, 1};
    int tellerCount = 4;
    int serviceTime = 1;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> clientArrivals = {20, 5, 10, 15, 25, 30};
    int tellerCount = 1;
    int serviceTime = 100;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 605;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> clientArrivals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100};
    int tellerCount = 10;
    int serviceTime = 2;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> clientArrivals = {2, 2, 2, 2, 10, 10, 10, 10};
    int tellerCount = 2;
    int serviceTime = 3;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> clientArrivals = {1, 2, 33};
    int tellerCount = 2;
    int serviceTime = 2;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> clientArrivals = {2, 4, 6, 3, 20};
    int tellerCount = 3;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> clientArrivals = {1, 4, 2, 3, 6, 8, 7, 9};
    int tellerCount = 4;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> clientArrivals = {100, 90, 60, 50, 30, 20, 10};
    int tellerCount = 3;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> clientArrivals = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int tellerCount = 1;
    int serviceTime = 20;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 221;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> clientArrivals = {1, 100};
    int tellerCount = 1;
    int serviceTime = 10;
    OptimalQueues* pObj = new OptimalQueues();
    clock_t start = clock();
    int result = pObj->minWaitingTime(clientArrivals, tellerCount, serviceTime);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=9818&pm=6169
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
 
struct OptimalQueues { 
   int minWaitingTime( vector <int> clientArrivals, int tellerCount, int serviceTime ) { 
      sort( clientArrivals.begin(), clientArrivals.end() );  
      reverse( clientArrivals.begin(), clientArrivals.end() );  
       
      int ret = 0; 
      for( int i = 0; i < clientArrivals.size(); ++i )  
         ret >?= clientArrivals[i] + (i/tellerCount+1)*serviceTime; 
       
      return ret; 
   } 
 
    
  
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/