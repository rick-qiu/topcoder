/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12336
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

class PenguinSledding {
public:
    long countDesigns(int numCheckpoints, vector<int> checkpoint1, vector<int> checkpoint2);
};

long PenguinSledding::countDesigns(int numCheckpoints, vector<int> checkpoint1, vector<int> checkpoint2) {
    long ret;
    return ret;
}


int test0() {
    int numCheckpoints = 4;
    vector<int> checkpoint1 = {1, 2, 3};
    vector<int> checkpoint2 = {2, 3, 4};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int numCheckpoints = 12;
    vector<int> checkpoint1 = {1, 2, 3, 4, 6, 7, 8};
    vector<int> checkpoint2 = {4, 4, 4, 5, 5, 5, 5};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int numCheckpoints = 3;
    vector<int> checkpoint1 = {1, 2, 3};
    vector<int> checkpoint2 = {2, 3, 1};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int numCheckpoints = 6;
    vector<int> checkpoint1 = {1, 3, 6};
    vector<int> checkpoint2 = {2, 4, 4};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int numCheckpoints = 2;
    vector<int> checkpoint1 = {1};
    vector<int> checkpoint2 = {2};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int numCheckpoints = 36;
    vector<int> checkpoint1 = {13, 24, 24, 20, 31, 16, 10, 36, 34, 32, 28, 5, 20, 29, 23, 2, 14, 4, 9, 5, 19, 21, 8, 1, 26, 27, 25, 15, 22, 30, 30, 6, 11, 7, 2, 35, 13, 29, 4, 12, 33, 18, 13, 14, 17, 35, 3};
    vector<int> checkpoint2 = {10, 15, 27, 1, 29, 11, 5, 18, 33, 1, 9, 2, 31, 6, 19, 10, 33, 18, 6, 27, 3, 22, 4, 12, 31, 30, 34, 16, 7, 24, 3, 28, 15, 21, 22, 8, 26, 20, 14, 32, 25, 17, 35, 8, 36, 26, 23};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 162;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int numCheckpoints = 6;
    vector<int> checkpoint1 = {1, 1, 1, 2, 2, 2, 3, 3, 3};
    vector<int> checkpoint2 = {4, 5, 6, 4, 5, 6, 4, 5, 6};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 34;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 50, 40, 40, 40, 23, 4, 24, 40, 22, 40, 8, 40, 40, 40, 34, 21, 40, 40, 38, 40, 40, 40, 40, 40, 28, 40, 40, 40, 40, 46, 13, 40, 40, 40, 47, 40, 40};
    vector<int> checkpoint2 = {45, 42, 20, 48, 12, 32, 25, 10, 26, 39, 16, 2, 19, 43, 37, 17, 19, 19, 19, 18, 19, 27, 19, 29, 11, 36, 19, 19, 1, 41, 19, 35, 14, 33, 49, 3, 19, 7, 5, 19, 31, 19, 19, 6, 9, 15, 19, 44, 30};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 68719493118;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int numCheckpoints = 4;
    vector<int> checkpoint1 = {1, 3};
    vector<int> checkpoint2 = {2, 4};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {31, 19, 28, 5, 4, 33, 16, 13, 11, 8, 36, 17, 27, 40, 2, 49, 41, 35, 21, 34, 29, 23, 32, 46, 48, 30, 3, 26, 22, 18, 45, 47, 24, 37, 9, 39, 6, 15, 43, 38, 20, 12, 50, 7, 44, 25, 1, 42, 10};
    vector<int> checkpoint2 = {14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 562949953421312;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    vector<int> checkpoint2 = {7, 26, 28, 25, 32, 11, 50, 39, 12, 5, 17, 19, 37, 3, 10, 44, 43, 18, 24, 15, 48, 4, 30, 23, 2, 14, 1, 8, 16, 31, 42, 9, 27, 38, 35, 40, 45, 46, 20, 29, 36, 21, 49, 13, 34, 41, 22, 6, 33};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 562949953421312;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int numCheckpoints = 30;
    vector<int> checkpoint1 = {7, 30, 30, 30, 9, 13, 29, 30, 30, 30, 30, 14, 30, 1, 30, 24, 30, 30, 18, 20, 19, 30, 30, 25, 30, 30, 30, 30, 6, 30, 30, 30, 30, 30, 30, 30, 30, 30, 26, 30, 30, 30, 21};
    vector<int> checkpoint2 = {22, 7, 14, 2, 17, 2, 10, 9, 26, 11, 4, 12, 19, 15, 3, 3, 17, 23, 8, 28, 27, 1, 25, 4, 5, 20, 22, 16, 11, 18, 12, 24, 13, 15, 28, 8, 10, 21, 23, 27, 6, 29, 16};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 536870968;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int numCheckpoints = 14;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7};
    vector<int> checkpoint2 = {8, 9, 10, 11, 12, 13, 14, 8, 9, 10, 11, 12, 13, 14, 8, 9, 10, 11, 12, 13, 14, 8, 9, 10, 11, 12, 13, 14, 8, 9, 10, 11, 12, 13, 14, 8, 9, 10, 11, 12, 13, 14, 8, 9, 10, 11, 12, 13, 14};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 1730;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int numCheckpoints = 10;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 8, 8, 9};
    vector<int> checkpoint2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 3, 4, 5, 6, 7, 8, 9, 10, 4, 5, 6, 7, 8, 9, 10, 5, 6, 7, 8, 9, 10, 6, 7, 8, 9, 10, 7, 8, 9, 10, 8, 9, 10, 9, 10, 10};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 5186;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int numCheckpoints = 30;
    vector<int> checkpoint1 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> checkpoint2 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 541065256;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 2, 1, 2, 1, 3, 2, 4, 1, 5, 2, 6, 1, 7, 3, 8, 2, 9, 4, 10, 1, 11, 5, 12, 2, 13, 6, 14, 1, 15, 7, 16, 3, 17, 8, 18, 2, 19, 9, 20, 4, 21, 10, 22, 1, 23, 11, 24};
    vector<int> checkpoint2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 862;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26};
    vector<int> checkpoint2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 33554431;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    vector<int> checkpoint2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 3};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 281474976710660;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 6, 8, 8, 8, 8, 8, 8, 9, 11, 11, 12, 14, 15, 15, 15, 15, 18, 18, 19, 20, 22, 24, 25, 25, 25, 28, 29, 30, 31, 34, 35, 36, 37, 39, 41, 43, 45, 48};
    vector<int> checkpoint2 = {13, 42, 32, 36, 8, 33, 50, 23, 50, 14, 19, 37, 8, 12, 15, 18, 26, 29, 37, 49, 40, 41, 34, 34, 16, 18, 47, 49, 19, 37, 35, 32, 42, 44, 29, 36, 37, 34, 47, 43, 42, 44, 41, 48, 42, 45, 47, 45, 48, 50};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 440;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 1, 1, 2, 3, 4, 4, 6, 6, 6, 7, 7, 8, 8, 10, 11, 11, 12, 13, 13, 13, 13, 14, 15, 17, 17, 19, 21, 21, 21, 21, 22, 22, 23, 23, 25, 25, 25, 26, 29, 30, 31, 31, 32, 32, 33, 35, 39, 40};
    vector<int> checkpoint2 = {23, 39, 40, 41, 14, 27, 16, 29, 8, 15, 40, 32, 38, 16, 43, 21, 23, 46, 50, 24, 42, 45, 47, 26, 42, 18, 23, 36, 31, 33, 39, 40, 30, 46, 24, 33, 37, 40, 42, 46, 31, 42, 35, 37, 40, 47, 42, 50, 50, 47};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 270;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7, 7, 9, 9, 9, 9, 10, 10, 11, 13, 13, 13, 14, 15, 16, 17, 19, 21, 21, 21, 22, 23, 24, 24, 26, 26, 27, 28, 31, 32, 35, 35, 35, 36, 36, 46};
    vector<int> checkpoint2 = {13, 16, 28, 12, 19, 32, 7, 21, 40, 8, 44, 18, 49, 37, 43, 48, 26, 29, 41, 45, 35, 37, 47, 14, 28, 40, 18, 31, 37, 41, 42, 32, 39, 42, 38, 39, 31, 42, 33, 34, 48, 34, 35, 40, 38, 43, 50, 46, 48, 50};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 179;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {2, 3, 3, 3, 4, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9, 10, 10, 10, 12, 13, 13, 13, 14, 15, 16, 16, 16, 17, 17, 19, 20, 20, 20, 20, 21, 21, 23, 23, 26, 27, 28, 29, 30, 30, 31, 33, 40, 41, 46};
    vector<int> checkpoint2 = {38, 19, 28, 38, 11, 13, 31, 12, 8, 46, 43, 19, 20, 23, 16, 47, 18, 24, 46, 24, 14, 18, 35, 38, 19, 27, 28, 33, 29, 34, 33, 22, 29, 37, 42, 24, 45, 36, 49, 27, 36, 36, 30, 42, 47, 40, 45, 42, 44, 47};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 191;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 2, 2, 2, 2, 2, 2, 2, 3, 4, 5, 5, 5, 5, 6, 7, 7, 9, 10, 11, 12, 12, 12, 12, 13, 13, 14, 14, 14, 17, 18, 18, 21, 22, 22, 22, 22, 22, 23, 24, 25, 25, 26, 28, 29, 31, 35, 36, 36, 39};
    vector<int> checkpoint2 = {41, 18, 20, 23, 26, 41, 47, 48, 29, 33, 11, 23, 29, 36, 7, 28, 30, 49, 29, 32, 14, 23, 35, 37, 25, 30, 30, 48, 49, 25, 26, 28, 46, 23, 30, 34, 39, 42, 46, 41, 34, 36, 30, 45, 39, 49, 45, 43, 48, 44};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 354;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 1, 1, 2, 3, 4, 6, 7, 7, 7, 7, 7, 7, 9, 10, 11, 12, 12, 12, 13, 15, 15, 15, 16, 16, 16, 17, 19, 19, 19, 20, 21, 21, 22, 23, 24, 24, 26, 26, 27, 27, 29, 30, 35, 37, 38, 38, 40, 41};
    vector<int> checkpoint2 = {3, 26, 27, 32, 38, 35, 11, 50, 9, 10, 11, 35, 41, 43, 12, 18, 21, 18, 45, 50, 43, 24, 26, 49, 17, 39, 49, 29, 36, 39, 44, 39, 29, 41, 39, 43, 29, 43, 36, 43, 41, 46, 44, 49, 48, 50, 42, 44, 48, 42};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {3, 3, 4, 5, 5, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 10, 10, 12, 13, 15, 15, 15, 15, 15, 17, 18, 18, 18, 18, 19, 21, 23, 24, 25, 25, 26, 27, 29, 29, 30, 31, 32, 33, 37, 37, 39, 40, 43, 45};
    vector<int> checkpoint2 = {8, 20, 44, 16, 37, 12, 16, 10, 24, 32, 34, 16, 24, 41, 44, 40, 23, 49, 15, 43, 20, 31, 34, 44, 45, 26, 28, 31, 48, 50, 38, 47, 25, 35, 41, 50, 44, 34, 42, 50, 38, 46, 37, 49, 38, 44, 47, 46, 50, 50};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 263;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 2, 3, 3, 4, 4, 5, 5, 6, 6, 6, 6, 7, 7, 8, 8, 9, 9, 9, 10, 10, 11, 11, 11, 12, 12, 13, 13, 15, 15, 15, 16, 16, 18, 19, 20, 22, 23, 25, 28, 28, 29, 30, 32, 32, 32, 37, 37, 38, 45};
    vector<int> checkpoint2 = {34, 38, 35, 44, 11, 47, 36, 50, 26, 30, 44, 47, 27, 39, 14, 36, 12, 21, 49, 25, 43, 16, 43, 46, 23, 31, 16, 26, 18, 28, 31, 38, 44, 36, 26, 22, 47, 48, 34, 37, 38, 36, 48, 45, 48, 49, 41, 44, 39, 47};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 178;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 1, 2, 3, 3, 6, 6, 8, 8, 10, 11, 13, 14, 15, 16, 16, 16, 16, 17, 19, 19, 20, 20, 20, 21, 21, 21, 22, 22, 24, 24, 25, 25, 26, 28, 28, 29, 30, 31, 32, 33, 34, 34, 40, 40, 41, 41, 43, 45};
    vector<int> checkpoint2 = {30, 47, 49, 30, 6, 22, 17, 46, 11, 48, 31, 41, 40, 34, 26, 32, 35, 47, 48, 41, 22, 37, 31, 40, 47, 27, 30, 34, 31, 37, 34, 45, 30, 37, 31, 38, 49, 40, 36, 47, 38, 43, 35, 50, 41, 45, 45, 49, 49, 48};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 276;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 5, 6, 6, 7, 7, 8, 8, 8, 8, 8, 9, 10, 10, 10, 11, 11, 13, 15, 17, 18, 18, 19, 19, 20, 20, 21, 22, 22, 23, 23, 28, 29, 32, 32, 32, 33, 33, 33, 36};
    vector<int> checkpoint2 = {18, 3, 18, 17, 22, 29, 13, 19, 21, 30, 38, 17, 13, 41, 8, 35, 9, 29, 30, 40, 49, 37, 20, 32, 42, 35, 36, 27, 19, 21, 24, 29, 45, 48, 30, 41, 30, 28, 43, 40, 45, 42, 36, 34, 36, 42, 35, 38, 50, 48};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 261;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 3, 3, 3, 4, 4, 6, 6, 8, 8, 9, 9, 9, 9, 11, 11, 11, 11, 13, 15, 16, 16, 16, 17, 18, 22, 23, 23, 23, 23, 24, 27, 28, 28, 29, 30, 30, 31, 34, 34, 34, 34, 34, 35, 36, 36, 37, 38, 42, 45};
    vector<int> checkpoint2 = {9, 45, 48, 50, 6, 36, 12, 17, 17, 44, 21, 25, 30, 44, 12, 14, 27, 33, 25, 29, 24, 25, 41, 34, 21, 40, 25, 28, 42, 43, 31, 44, 31, 34, 37, 47, 48, 40, 35, 39, 41, 42, 43, 40, 40, 50, 48, 47, 43, 47};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 307;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {2, 2, 4, 4, 4, 4, 5, 5, 7, 8, 8, 8, 9, 9, 10, 10, 10, 12, 13, 14, 14, 14, 14, 16, 16, 17, 17, 17, 18, 18, 18, 19, 20, 20, 21, 21, 22, 23, 23, 25, 26, 28, 28, 31, 31, 34, 35, 35, 36, 41};
    vector<int> checkpoint2 = {5, 49, 30, 32, 41, 44, 25, 32, 46, 27, 29, 39, 37, 47, 25, 33, 37, 27, 26, 22, 24, 25, 43, 21, 41, 24, 31, 41, 24, 33, 36, 28, 25, 42, 33, 49, 46, 35, 40, 36, 27, 30, 44, 34, 47, 39, 37, 49, 50, 50};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 185;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 3, 3, 4, 6, 6, 6, 6, 6, 6, 7, 7, 8, 8, 9, 10, 10, 12, 12, 13, 13, 14, 14, 15, 15, 15, 16, 16, 16, 19, 19, 20, 20, 22, 23, 23, 24, 27, 28, 29, 29, 30, 31, 32, 32, 34, 34, 37, 37};
    vector<int> checkpoint2 = {11, 14, 9, 14, 22, 9, 12, 28, 39, 41, 42, 49, 50, 35, 37, 50, 26, 35, 13, 36, 31, 44, 37, 48, 24, 32, 43, 18, 19, 29, 20, 50, 23, 36, 50, 35, 40, 49, 32, 47, 42, 46, 42, 41, 35, 39, 37, 50, 42, 50};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 286;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 2, 2, 3, 3, 3, 3, 5, 6, 6, 6, 7, 8, 9, 10, 10, 10, 11, 12, 12, 14, 15, 16, 16, 17, 17, 17, 18, 18, 19, 19, 20, 20, 20, 22, 23, 24, 25, 28, 28, 29, 30, 31, 32, 38, 41};
    vector<int> checkpoint2 = {3, 28, 29, 42, 49, 43, 45, 16, 23, 26, 39, 42, 8, 21, 27, 16, 35, 24, 34, 46, 47, 41, 18, 27, 35, 44, 23, 46, 26, 29, 48, 39, 50, 20, 38, 22, 30, 41, 48, 40, 27, 48, 34, 40, 35, 34, 35, 50, 41, 42};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 205;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 1, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 9, 9, 9, 10, 11, 12, 12, 13, 13, 13, 14, 15, 15, 15, 17, 17, 18, 18, 19, 25, 27, 28, 29, 29, 30, 31, 31, 34, 34, 41, 43};
    vector<int> checkpoint2 = {30, 36, 44, 35, 13, 45, 46, 5, 8, 21, 27, 28, 36, 37, 39, 13, 38, 47, 49, 18, 39, 43, 43, 41, 32, 42, 16, 25, 34, 27, 16, 30, 35, 23, 38, 19, 41, 24, 46, 46, 32, 32, 48, 43, 33, 46, 35, 47, 43, 45};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 198;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 3, 4, 4, 5, 5, 6, 6, 7, 9, 10, 10, 11, 12, 12, 14, 14, 14, 16, 16, 16, 17, 18, 18, 18, 18, 18, 19, 21, 22, 23, 25, 25, 26, 27, 28, 29, 30, 31, 31, 32, 34, 34, 34, 37, 38, 40, 41, 41};
    vector<int> checkpoint2 = {35, 44, 16, 13, 39, 9, 17, 27, 43, 41, 27, 39, 40, 27, 21, 39, 17, 21, 45, 25, 33, 45, 28, 23, 26, 31, 38, 49, 44, 24, 26, 47, 41, 44, 42, 30, 41, 35, 33, 32, 38, 36, 39, 40, 41, 44, 40, 49, 46, 47};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 238;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 6, 8, 8, 8, 9, 9, 10, 10, 10, 10, 10, 12, 13, 13, 14, 14, 16, 16, 16, 17, 18, 19, 19, 19, 22, 22, 24, 25, 27, 28, 30, 31, 33, 34, 35, 37, 38, 38, 38, 45};
    vector<int> checkpoint2 = {11, 26, 26, 50, 4, 39, 41, 7, 13, 18, 32, 16, 21, 41, 40, 48, 23, 26, 34, 41, 47, 36, 25, 46, 36, 49, 30, 35, 45, 50, 30, 23, 30, 44, 27, 30, 48, 41, 43, 34, 36, 44, 38, 47, 38, 43, 39, 48, 49, 47};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 208;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 1, 1, 2, 2, 2, 4, 4, 5, 6, 6, 7, 7, 7, 8, 8, 10, 10, 11, 12, 13, 17, 17, 18, 18, 19, 19, 19, 20, 20, 20, 23, 23, 23, 26, 26, 27, 28, 29, 29, 31, 32, 34, 35, 36, 36, 36, 40, 44};
    vector<int> checkpoint2 = {27, 33, 36, 50, 17, 35, 47, 44, 47, 8, 12, 31, 8, 25, 37, 29, 47, 25, 45, 49, 19, 27, 22, 50, 25, 32, 23, 34, 36, 21, 31, 37, 24, 27, 47, 48, 49, 38, 42, 35, 38, 41, 38, 37, 45, 38, 43, 46, 42, 45};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 206;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 13, 14, 15, 16, 17, 20, 20, 20, 22, 22, 25, 26, 26, 27, 27, 29, 31, 33, 34, 35, 37};
    vector<int> checkpoint2 = {15, 21, 7, 11, 27, 33, 41, 9, 23, 39, 45, 21, 22, 31, 8, 10, 14, 18, 38, 41, 47, 34, 36, 49, 47, 48, 49, 23, 43, 14, 38, 50, 19, 28, 21, 42, 47, 47, 48, 32, 31, 33, 38, 39, 36, 34, 38, 47, 40, 39};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 212;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {1, 2, 3, 4, 4, 4, 5, 5, 5, 6, 6, 7, 7, 9, 9, 10, 11, 11, 12, 14, 16, 16, 17, 17, 17, 17, 18, 20, 21, 23, 23, 25, 26, 26, 29, 29, 30, 30, 30, 32, 32, 34, 34, 35, 35, 36, 40, 41, 44, 48};
    vector<int> checkpoint2 = {12, 30, 50, 6, 11, 20, 17, 19, 47, 22, 33, 23, 24, 26, 45, 50, 13, 30, 15, 48, 38, 47, 18, 25, 33, 48, 31, 27, 34, 36, 42, 47, 43, 48, 35, 47, 36, 40, 47, 34, 49, 36, 40, 38, 39, 46, 42, 49, 46, 50};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 212;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 7, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9, 9, 10, 10, 11, 11, 11, 12, 12, 13, 14, 15, 15, 18};
    vector<int> checkpoint2 = {7, 11, 12, 19, 20, 8, 10, 16, 18, 19, 4, 8, 9, 12, 17, 19, 9, 14, 19, 20, 9, 12, 15, 17, 20, 10, 12, 13, 15, 20, 10, 18, 19, 10, 11, 12, 15, 17, 16, 17, 16, 19, 20, 13, 20, 14, 19, 16, 19, 19};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 1365;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 8, 8, 8, 8, 9, 9, 9, 10, 10, 11, 11, 11, 11, 12, 12, 13, 13, 13, 14, 15, 15, 16, 16, 17, 17, 18};
    vector<int> checkpoint2 = {2, 5, 7, 9, 17, 3, 6, 8, 11, 12, 13, 4, 11, 12, 18, 11, 16, 19, 6, 9, 11, 9, 10, 15, 12, 13, 16, 20, 11, 19, 20, 13, 17, 13, 14, 16, 19, 17, 20, 14, 16, 17, 17, 18, 20, 19, 20, 18, 19, 19};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 1307;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 9, 10, 10, 11, 11, 12, 12, 12, 13, 14, 15, 16, 17};
    vector<int> checkpoint2 = {2, 3, 6, 13, 14, 17, 18, 19, 10, 14, 4, 9, 16, 18, 7, 9, 11, 13, 17, 18, 6, 11, 12, 18, 20, 10, 20, 8, 13, 14, 20, 9, 10, 11, 12, 15, 19, 18, 15, 20, 15, 16, 16, 18, 20, 18, 19, 17, 19, 19};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 964;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 8, 9, 9, 9, 10, 10, 11, 11, 11, 13, 13, 14, 15, 16};
    vector<int> checkpoint2 = {3, 6, 7, 11, 12, 17, 3, 4, 10, 16, 20, 5, 6, 14, 15, 19, 7, 10, 15, 16, 18, 6, 16, 20, 7, 8, 10, 18, 9, 11, 12, 13, 15, 16, 17, 20, 10, 10, 14, 19, 13, 19, 15, 18, 19, 14, 20, 17, 16, 17};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 2796;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 8, 8, 10, 11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 14, 16, 16, 16, 17};
    vector<int> checkpoint2 = {4, 7, 12, 20, 3, 7, 9, 6, 9, 14, 5, 10, 11, 13, 14, 15, 18, 19, 20, 9, 12, 13, 15, 7, 13, 14, 15, 9, 10, 9, 20, 20, 12, 14, 15, 17, 18, 20, 15, 18, 19, 20, 14, 18, 20, 19, 17, 19, 20, 18};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 1893;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 9, 9, 9, 9, 10, 10, 11, 12, 14, 15, 15, 16};
    vector<int> checkpoint2 = {6, 7, 10, 12, 14, 20, 6, 7, 8, 12, 4, 5, 6, 8, 12, 13, 14, 16, 19, 5, 7, 11, 13, 15, 17, 14, 15, 16, 18, 9, 12, 15, 17, 10, 13, 15, 18, 18, 14, 15, 18, 19, 11, 14, 19, 13, 16, 16, 17, 19};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 1369;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 2, 2, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9, 9, 10, 10, 11, 12, 13, 13, 13, 13, 14, 15, 16, 16, 16};
    vector<int> checkpoint2 = {13, 16, 10, 15, 19, 20, 6, 12, 7, 9, 10, 15, 16, 19, 6, 13, 14, 15, 16, 17, 18, 19, 20, 10, 13, 20, 12, 14, 19, 9, 10, 17, 16, 17, 18, 19, 20, 11, 14, 18, 18, 15, 18, 19, 20, 20, 16, 18, 19, 20};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 1572;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 10, 10, 11, 11, 12, 13, 14};
    vector<int> checkpoint2 = {2, 3, 6, 8, 9, 12, 14, 16, 17, 19, 20, 4, 5, 17, 12, 13, 17, 8, 12, 13, 14, 17, 18, 20, 6, 8, 15, 16, 19, 8, 9, 11, 14, 18, 11, 12, 20, 11, 16, 17, 18, 12, 18, 14, 17, 13, 19, 14, 17, 19};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 3119;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9, 9, 11, 11, 12, 13, 13, 13, 13, 15, 16, 17};
    vector<int> checkpoint2 = {3, 5, 6, 8, 15, 18, 12, 13, 14, 15, 16, 18, 19, 9, 13, 17, 7, 9, 10, 14, 9, 17, 18, 20, 10, 11, 19, 9, 10, 11, 15, 10, 13, 14, 16, 18, 10, 12, 15, 17, 13, 16, 15, 14, 17, 19, 20, 20, 17, 20};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 1084;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 7, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 11, 11, 12, 13, 13, 14, 14, 15, 16, 16};
    vector<int> checkpoint2 = {2, 6, 9, 11, 12, 15, 6, 8, 9, 19, 6, 12, 18, 19, 20, 8, 9, 13, 15, 6, 9, 17, 18, 19, 14, 8, 10, 15, 16, 19, 10, 11, 16, 17, 11, 15, 16, 20, 12, 13, 12, 20, 20, 15, 19, 15, 18, 18, 17, 19};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 938;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 6, 6, 6, 7, 7, 8, 8, 9, 9, 9, 9, 10, 10, 11, 11, 12, 13, 13, 13, 13, 14, 14, 15, 15, 15, 16, 17};
    vector<int> checkpoint2 = {13, 14, 17, 18, 19, 3, 4, 9, 11, 14, 19, 4, 6, 8, 10, 11, 17, 11, 14, 16, 17, 11, 13, 10, 11, 19, 9, 20, 9, 15, 11, 12, 16, 17, 13, 14, 16, 18, 18, 14, 15, 16, 19, 15, 16, 17, 18, 20, 19, 18};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 1191;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 7, 8, 8, 8, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 11, 12, 12, 13, 14, 15, 15, 16, 17, 18, 18};
    vector<int> checkpoint2 = {3, 7, 12, 4, 5, 7, 9, 11, 13, 15, 4, 6, 8, 13, 8, 10, 11, 16, 17, 6, 7, 16, 17, 10, 11, 20, 18, 19, 20, 10, 11, 13, 14, 16, 11, 13, 14, 18, 19, 18, 15, 16, 15, 16, 19, 20, 20, 19, 19, 20};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 971;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int numCheckpoints = 20;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 11, 12, 13, 13, 14, 16, 16, 18};
    vector<int> checkpoint2 = {4, 6, 9, 11, 13, 20, 3, 4, 11, 12, 16, 17, 19, 8, 11, 14, 19, 7, 12, 14, 15, 16, 9, 12, 17, 18, 20, 12, 13, 8, 18, 20, 14, 15, 16, 18, 10, 13, 15, 20, 11, 12, 12, 17, 16, 18, 17, 18, 20, 19};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 891;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int numCheckpoints = 46;
    vector<int> checkpoint1 = {1, 1, 3, 3, 4, 4, 5, 6, 7, 7, 7, 7, 7, 8, 9, 10, 10, 10, 10, 11, 11, 11, 12, 13, 13, 14, 15, 15, 16, 16, 17, 17, 20, 20, 21, 25, 25, 26, 27, 28, 29, 29, 29, 31, 31, 33, 34, 39, 42, 45};
    vector<int> checkpoint2 = {2, 35, 24, 29, 15, 44, 9, 40, 30, 31, 33, 42, 43, 15, 18, 29, 33, 34, 44, 18, 33, 40, 25, 38, 42, 35, 19, 35, 23, 41, 18, 46, 29, 30, 28, 33, 38, 30, 44, 31, 37, 42, 44, 32, 44, 36, 36, 43, 45, 46};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 267;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int numCheckpoints = 42;
    vector<int> checkpoint1 = {1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5, 7, 7, 7, 8, 8, 9, 11, 12, 12, 12, 14, 14, 14, 14, 15, 15, 15, 17, 18, 19, 19, 20, 23, 23, 24, 24, 27, 28, 28, 30, 31, 31, 35, 39, 40};
    vector<int> checkpoint2 = {30, 35, 17, 36, 41, 10, 17, 26, 5, 7, 8, 24, 29, 36, 41, 27, 33, 39, 30, 37, 22, 24, 14, 39, 42, 17, 27, 36, 42, 22, 30, 41, 29, 32, 22, 40, 30, 38, 41, 25, 35, 38, 32, 38, 40, 34, 40, 38, 41, 42};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 294;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int numCheckpoints = 40;
    vector<int> checkpoint1 = {1, 1, 1, 2, 2, 3, 3, 3, 4, 5, 5, 5, 6, 6, 7, 7, 8, 9, 10, 10, 10, 10, 11, 11, 12, 12, 12, 12, 13, 14, 14, 14, 15, 16, 17, 17, 17, 19, 21, 21, 22, 25, 26, 27, 28, 28, 28, 30, 30, 36};
    vector<int> checkpoint2 = {31, 34, 40, 3, 20, 21, 25, 31, 19, 8, 17, 30, 32, 38, 24, 31, 19, 33, 18, 30, 36, 40, 32, 36, 15, 22, 31, 39, 15, 16, 28, 37, 24, 26, 24, 31, 35, 38, 27, 29, 31, 26, 34, 30, 29, 30, 39, 33, 38, 40};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 280;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int numCheckpoints = 36;
    vector<int> checkpoint1 = {1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 6, 7, 7, 8, 10, 11, 11, 11, 12, 12, 12, 12, 13, 13, 15, 15, 15, 16, 17, 18, 18, 18, 19, 19, 20, 20, 20, 20, 22, 22, 22, 24, 25, 26, 27, 27, 31};
    vector<int> checkpoint2 = {16, 3, 11, 28, 33, 23, 32, 15, 18, 22, 30, 16, 32, 33, 16, 36, 20, 26, 15, 22, 26, 23, 25, 26, 31, 24, 33, 16, 20, 29, 30, 20, 20, 26, 36, 28, 31, 23, 24, 25, 35, 33, 35, 36, 33, 26, 32, 28, 30, 34};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 552;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int numCheckpoints = 37;
    vector<int> checkpoint1 = {1, 2, 3, 3, 3, 3, 3, 4, 4, 5, 5, 6, 7, 7, 7, 7, 7, 8, 10, 10, 11, 12, 12, 13, 13, 14, 14, 14, 14, 14, 15, 15, 16, 16, 16, 16, 17, 19, 19, 20, 21, 23, 23, 23, 23, 24, 27, 30, 32, 32};
    vector<int> checkpoint2 = {31, 32, 12, 24, 25, 30, 32, 22, 23, 8, 18, 32, 10, 12, 23, 24, 32, 10, 18, 28, 35, 27, 31, 24, 34, 15, 19, 22, 27, 34, 27, 34, 17, 20, 23, 25, 35, 26, 35, 22, 32, 27, 30, 31, 33, 31, 32, 37, 35, 37};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 619;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int numCheckpoints = 27;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9, 11, 11, 11, 13, 13, 15, 15, 16, 18, 19, 19};
    vector<int> checkpoint2 = {4, 5, 9, 19, 20, 21, 3, 6, 8, 18, 6, 10, 20, 25, 17, 19, 20, 18, 20, 23, 24, 27, 8, 10, 11, 12, 14, 19, 22, 14, 18, 20, 15, 20, 22, 10, 12, 13, 15, 18, 19, 24, 22, 27, 21, 24, 21, 24, 22, 27};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 984;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int numCheckpoints = 14;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 8, 8, 8, 8, 9, 9, 10, 10, 11, 11, 11, 12};
    vector<int> checkpoint2 = {2, 5, 6, 8, 9, 10, 13, 4, 5, 6, 8, 9, 11, 13, 14, 4, 5, 6, 7, 8, 11, 5, 6, 7, 8, 9, 11, 12, 13, 6, 9, 10, 14, 7, 8, 10, 14, 13, 10, 12, 13, 14, 11, 14, 12, 13, 12, 13, 14, 13};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 3629;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int numCheckpoints = 26;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 10, 10, 10, 11, 11, 12, 13, 13, 13, 13, 15, 15, 15, 15, 16, 16, 17, 17, 17, 18, 20, 23};
    vector<int> checkpoint2 = {3, 6, 8, 16, 18, 24, 20, 4, 5, 8, 16, 22, 5, 17, 20, 7, 13, 17, 26, 8, 12, 15, 22, 9, 10, 24, 12, 22, 14, 20, 22, 19, 26, 14, 18, 20, 21, 26, 18, 19, 21, 26, 18, 25, 18, 19, 25, 26, 26, 25};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 566;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int numCheckpoints = 21;
    vector<int> checkpoint1 = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 11, 11, 12, 12, 12, 12, 12, 13, 13, 15, 15, 15, 16, 16, 16, 18, 19};
    vector<int> checkpoint2 = {7, 9, 20, 16, 20, 10, 12, 16, 18, 9, 16, 10, 12, 17, 20, 10, 17, 15, 16, 18, 9, 10, 11, 13, 21, 11, 12, 15, 17, 12, 14, 19, 20, 12, 19, 13, 14, 19, 20, 21, 18, 20, 17, 18, 19, 18, 19, 21, 19, 20};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 1997;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int numCheckpoints = 23;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 2, 2, 2, 3, 4, 4, 4, 5, 6, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 10, 10, 10, 11, 11, 12, 12, 12, 12, 13, 13, 14, 15, 15, 15, 16, 16, 16, 17, 17, 18, 18, 20, 21};
    vector<int> checkpoint2 = {5, 10, 12, 18, 22, 4, 17, 19, 9, 13, 15, 22, 15, 9, 11, 12, 13, 21, 8, 16, 17, 20, 9, 19, 20, 17, 12, 14, 23, 17, 18, 15, 18, 19, 21, 21, 23, 16, 16, 21, 23, 18, 19, 23, 19, 21, 20, 23, 21, 23};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 753;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int numCheckpoints = 38;
    vector<int> checkpoint1 = {1, 1, 1, 2, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 6, 7, 8, 8, 8, 9, 10, 11, 12, 13, 13, 14, 14, 14, 15, 16, 16, 18, 18, 18, 19, 19, 19, 20, 21, 22, 22, 22, 22, 23, 26, 28, 28, 30, 33, 34};
    vector<int> checkpoint2 = {7, 22, 23, 27, 19, 24, 8, 13, 29, 32, 35, 37, 20, 25, 19, 10, 12, 16, 22, 19, 38, 38, 31, 19, 36, 30, 32, 33, 32, 21, 32, 23, 29, 32, 20, 21, 34, 37, 37, 31, 33, 34, 37, 27, 34, 31, 33, 34, 37, 36};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 433;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int numCheckpoints = 45;
    vector<int> checkpoint1 = {1, 1, 2, 2, 4, 4, 5, 5, 5, 6, 6, 6, 8, 9, 9, 10, 12, 13, 13, 14, 15, 15, 15, 16, 17, 17, 18, 19, 21, 23, 24, 24, 24, 26, 26, 27, 27, 27, 28, 28, 29, 30, 32, 32, 34, 35, 35, 35, 36, 38};
    vector<int> checkpoint2 = {12, 14, 11, 26, 28, 42, 7, 14, 34, 9, 18, 19, 12, 33, 42, 30, 28, 14, 30, 34, 20, 41, 45, 30, 39, 45, 24, 28, 35, 29, 28, 36, 40, 35, 36, 31, 35, 38, 34, 38, 44, 34, 37, 42, 36, 36, 37, 38, 45, 39};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 311;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int numCheckpoints = 9;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 7, 7, 8};
    vector<int> checkpoint2 = {2, 3, 4, 5, 6, 7, 8, 9, 3, 4, 5, 6, 7, 8, 9, 4, 5, 6, 7, 8, 9, 5, 6, 7, 8, 9, 6, 7, 8, 9, 7, 8, 9, 8, 9, 9};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 2344;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int numCheckpoints = 25;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 6, 6, 7, 7, 8, 8, 8, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 14, 14, 15, 15, 16, 16, 16, 16, 19, 20, 20, 22};
    vector<int> checkpoint2 = {2, 8, 10, 11, 18, 9, 11, 19, 22, 23, 18, 23, 13, 18, 20, 13, 21, 10, 12, 19, 11, 19, 21, 23, 24, 25, 12, 16, 18, 20, 21, 15, 18, 24, 13, 20, 21, 14, 15, 16, 19, 20, 17, 18, 20, 23, 20, 21, 24, 25};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 888;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int numCheckpoints = 42;
    vector<int> checkpoint1 = {1, 1, 2, 2, 2, 2, 4, 4, 5, 6, 6, 8, 8, 8, 8, 8, 9, 10, 10, 11, 11, 12, 12, 13, 13, 13, 14, 15, 16, 16, 16, 16, 16, 17, 17, 17, 18, 18, 19, 21, 21, 22, 23, 24, 27, 28, 29, 32, 35, 39};
    vector<int> checkpoint2 = {25, 30, 20, 30, 36, 40, 27, 34, 25, 27, 32, 12, 19, 27, 36, 39, 11, 15, 24, 16, 18, 24, 30, 15, 18, 31, 30, 25, 18, 29, 31, 33, 42, 28, 38, 42, 25, 30, 42, 28, 42, 41, 37, 41, 37, 36, 31, 35, 42, 41};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 298;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int numCheckpoints = 7;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6};
    vector<int> checkpoint2 = {2, 3, 4, 5, 6, 7, 3, 4, 5, 6, 7, 4, 5, 6, 7, 5, 6, 7, 6, 7, 7};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 456;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int numCheckpoints = 33;
    vector<int> checkpoint1 = {1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 8, 8, 9, 9, 11, 11, 11, 11, 12, 12, 13, 13, 15, 15, 15, 15, 16, 16, 16, 17, 19, 21, 21, 26, 26, 27, 32};
    vector<int> checkpoint2 = {2, 32, 4, 13, 14, 6, 15, 25, 13, 26, 27, 10, 11, 12, 24, 29, 10, 11, 12, 17, 16, 21, 22, 17, 26, 14, 17, 17, 25, 26, 32, 21, 23, 27, 31, 20, 22, 23, 25, 20, 28, 33, 19, 32, 24, 33, 31, 33, 32, 33};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 372;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int numCheckpoints = 17;
    vector<int> checkpoint1 = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10, 11, 11, 13, 15, 16};
    vector<int> checkpoint2 = {2, 3, 7, 10, 17, 3, 4, 5, 6, 9, 10, 11, 12, 14, 15, 16, 5, 8, 9, 11, 17, 5, 8, 14, 16, 17, 6, 8, 10, 15, 13, 14, 15, 10, 14, 9, 11, 14, 13, 14, 17, 11, 12, 13, 15, 12, 13, 16, 16, 17};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 5103;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int numCheckpoints = 41;
    vector<int> checkpoint1 = {1, 1, 2, 2, 2, 3, 3, 3, 4, 5, 5, 6, 6, 6, 7, 7, 8, 8, 8, 8, 9, 10, 11, 12, 12, 13, 13, 13, 13, 13, 15, 17, 17, 17, 18, 19, 19, 22, 22, 23, 25, 26, 26, 28, 29, 29, 30, 31, 38, 38};
    vector<int> checkpoint2 = {4, 26, 8, 22, 41, 18, 20, 31, 14, 11, 18, 19, 26, 31, 20, 28, 11, 12, 20, 34, 36, 39, 35, 24, 30, 19, 22, 23, 25, 39, 22, 27, 35, 40, 19, 26, 30, 25, 32, 37, 39, 28, 34, 34, 32, 35, 32, 36, 39, 40};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 265;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int numCheckpoints = 9;
    vector<int> checkpoint1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> checkpoint2 = {2, 3, 4, 5, 6, 7, 8, 9, 1};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int numCheckpoints = 3;
    vector<int> checkpoint1 = {1, 2, 3};
    vector<int> checkpoint2 = {2, 3, 1};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int numCheckpoints = 36;
    vector<int> checkpoint1 = {13, 24, 24, 20, 31, 16, 10, 36, 34, 32, 28, 5, 20, 29, 23, 2, 14, 4, 9, 5, 19, 21, 8, 1, 26, 27, 25, 15, 22, 30, 30, 6, 11, 7, 2, 35, 13, 29, 4, 12, 33, 18, 13, 14, 17, 35, 3};
    vector<int> checkpoint2 = {10, 15, 27, 1, 29, 11, 5, 18, 33, 1, 9, 2, 31, 6, 19, 10, 33, 18, 6, 27, 3, 22, 4, 12, 31, 30, 34, 16, 7, 24, 3, 28, 15, 21, 22, 8, 26, 20, 14, 32, 25, 17, 35, 8, 36, 26, 23};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 162;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int numCheckpoints = 3;
    vector<int> checkpoint1 = {1, 2, 1};
    vector<int> checkpoint2 = {2, 3, 3};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int numCheckpoints = 4;
    vector<int> checkpoint1 = {1, 2, 3, 4};
    vector<int> checkpoint2 = {2, 3, 4, 1};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int numCheckpoints = 3;
    vector<int> checkpoint1 = {1, 1, 2};
    vector<int> checkpoint2 = {2, 3, 3};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int numCheckpoints = 5;
    vector<int> checkpoint1 = {1, 1, 2, 1, 3, 3, 5, 5, 5, 5};
    vector<int> checkpoint2 = {2, 4, 4, 3, 4, 2, 1, 2, 3, 4};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 76;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int numCheckpoints = 48;
    vector<int> checkpoint1 = {1, 1, 2, 4, 5, 5, 6, 6, 6, 7, 7, 7, 8, 9, 9, 10, 10, 10, 11, 11, 14, 14, 17, 17, 19, 21, 24, 25, 26, 26, 26, 27, 27, 27, 27, 29, 30, 32, 35, 36, 36, 37, 37, 38, 40, 41, 42};
    vector<int> checkpoint2 = {19, 32, 32, 48, 13, 48, 17, 19, 35, 11, 20, 35, 43, 26, 44, 11, 27, 41, 28, 32, 22, 31, 32, 34, 42, 40, 44, 37, 27, 32, 35, 38, 39, 44, 48, 43, 45, 41, 46, 37, 39, 38, 46, 48, 42, 47, 47};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 264;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int numCheckpoints = 50;
    vector<int> checkpoint1 = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 50, 40, 40, 40, 23, 4, 24, 40, 22, 40, 8, 40, 40, 40, 34, 21, 40, 40, 38, 40, 40, 40, 40, 40, 28, 40, 40, 40, 40, 46, 13, 40, 40, 40, 47, 40, 40};
    vector<int> checkpoint2 = {45, 42, 20, 48, 12, 32, 25, 10, 26, 39, 16, 2, 19, 43, 37, 17, 19, 19, 19, 18, 19, 27, 19, 29, 11, 36, 19, 19, 1, 41, 19, 35, 14, 33, 49, 3, 19, 7, 5, 19, 31, 19, 19, 6, 9, 15, 19, 44, 30};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 68719493118;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int numCheckpoints = 3;
    vector<int> checkpoint1 = {3, 2};
    vector<int> checkpoint2 = {2, 1};
    PenguinSledding* pObj = new PenguinSledding();
    clock_t start = clock();
    long result = pObj->countDesigns(numCheckpoints, checkpoint1, checkpoint2);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22912471&rd=15486&pm=12336
********************************************************************************
//#pragma comment(linker, "/STACK:16777216") 
#include <stdio.h> 
#include <ctype.h> 
#include <iostream> 
#include <math.h> 
#include <string.h> 
#include <algorithm> 
#include <stdlib.h> 
#include <time.h> 
#include <queue> 
#include <set> 
#include <map> 
#include <string> 
#include <vector> 
#include <utility> 
#include <assert.h> 
 
#define MPI 3.141592653589793238462643 
#define eps 1e-8 
#define inf ((int)1e9) 
#define pb push_back 
#define mp make_pair 
 
using namespace std; 
 
long long res=1; 
bool G[60][60]; 
long long Deg[60]; 
 
class  
PenguinSledding 
{ 
public: 
long long countDesigns(int n, vector <int> V1, vector <int> V2) 
{ 
  int m=(int)V1.size(), i, j, k; 
  for (i=0; i<m; i++) 
    V1[i]--, V2[i]--, Deg[V1[i]]++, Deg[V2[i]]++, G[V1[i]][V2[i]]=1, G[V2[i]][V1[i]]=1; 
  for (i=0; i<n; i++) 
    for (j=i+1; j<n; j++) 
      for (k=j+1; k<n; k++) 
        if (G[i][j] && G[j][k] && G[k][i]) 
          res++; 
  res-=m; 
  for (i=0; i<n; i++) 
    res+=(1ll<<Deg[i])-1ll; 
  return res; 
} 
 
};

********************************************************************************
*******************************************************************************/