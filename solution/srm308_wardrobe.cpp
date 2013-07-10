/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6181
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

class Wardrobe {
public:
    int countUnscrewedHoles(vector<int> bolts);
};

int Wardrobe::countUnscrewedHoles(vector<int> bolts) {
    int ret;
    return ret;
}


int test0() {
    vector<int> bolts = {1, 2, 3};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
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
    vector<int> bolts = {1, 2, 3, 2, 4};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
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
    vector<int> bolts = {1, 2, 3, 3, 4, 2, 5, 4};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> bolts = {12, 14, 12, 25, 15, 22, 19, 13, 26, 19, 24, 18, 14};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> bolts = {26, 26, 26, 14, 13, 28, 27, 15, 27, 28, 28, 26};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> bolts = {36, 66, 93, 60, 99, 86, 30, 33, 3, 48, 46, 32, 55, 81, 34, 54, 27, 87, 57, 61, 40, 47, 59, 93, 6, 34, 78, 80, 46, 56, 24, 41, 15, 51, 26, 81, 26, 31, 38, 43, 67, 35, 16, 88};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> bolts = {73, 59, 63, 55, 97, 36, 47, 5, 84, 37, 96, 31, 23, 99, 57, 56, 23, 95, 68, 45, 66, 79, 45, 93, 13, 65, 24, 7, 42, 41, 58, 2, 62, 16, 66, 75, 2, 58, 4, 21, 73, 2, 11, 7, 43, 41, 26, 53, 51};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
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
    vector<int> bolts = {25, 22, 65, 18, 63, 14, 60, 36, 16, 45, 87, 86, 8, 32, 23, 30, 98, 74, 50, 36, 64, 12, 57, 26, 89, 38, 34, 11, 9, 60, 5, 17, 18};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> bolts = {51, 74, 85, 11, 97, 89, 100, 61, 88, 26, 77, 97, 74, 84, 20, 23, 85, 88, 76, 14, 51, 20, 53, 69, 31, 40};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> bolts = {8, 54, 56, 89, 90, 15, 99, 66, 70, 92, 16, 6, 62};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> bolts = {44, 96, 94, 29, 9, 77, 80, 32, 100, 90, 20, 72, 63, 13, 43, 52, 25, 56, 69, 31, 27, 4, 20, 18, 52, 94, 53, 32, 64, 79, 20, 5, 98, 31, 58, 3, 17, 49, 36};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> bolts = {2};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> bolts = {59, 97, 79, 8, 11, 32, 96, 56, 26, 58, 33, 61, 85};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> bolts = {24, 28, 58, 78, 50, 24, 46, 75, 82, 53, 76, 64, 37, 43, 14, 5, 19, 60, 15, 33, 6, 69, 42, 80, 90, 23, 10, 48, 61, 57, 29, 19, 15, 15, 59, 39, 95, 82, 63, 35, 2, 69, 97, 56};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> bolts = {97, 69, 92, 39, 8, 36, 95, 58, 2, 69, 86, 35, 78, 9, 42, 60, 60, 12, 76, 92};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> bolts = {22, 23, 52, 61, 39, 38, 1, 40, 17};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> bolts = {87, 70, 81, 34};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
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
    vector<int> bolts = {98, 41, 1, 19, 38, 14, 90, 87, 83, 6, 18, 91, 67, 91, 44, 85, 99, 81, 77, 83, 42, 26, 61, 39, 67, 41, 76, 36, 82, 17, 51};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> bolts = {3, 30, 77, 60, 56, 67, 59, 10, 74, 31, 30, 49, 65, 24, 22};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> bolts = {10, 95, 76, 33, 50, 80, 78, 95, 81, 3, 37, 18, 42, 40, 47, 6, 35, 52, 65, 75};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> bolts = {6, 97, 13, 38, 35, 100, 49, 20, 76, 31, 73, 40, 39, 65, 27, 81, 53, 34, 99, 30, 4, 29, 20, 31, 49, 7, 91, 30, 63, 27, 30, 11, 37, 43};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> bolts = {92, 42, 45, 100, 32, 59, 80, 43, 85, 71, 28, 11, 79, 29, 50, 66, 53, 57, 39, 53, 100, 62, 73, 51, 25, 44, 85, 28, 91, 62, 44, 17, 57, 36, 69, 79, 58, 61, 100, 100, 85, 17, 68, 58};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> bolts = {64, 52, 39, 16, 96, 70, 33, 53, 5, 6, 29, 22, 23, 61, 33, 45, 71, 68, 81, 93, 21, 68, 49, 21, 34, 22, 72, 67, 15, 82, 73, 1, 73, 34, 56, 9, 94, 78, 85, 55, 44, 90, 86, 55, 3, 49, 89, 20};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> bolts = {18, 31, 29, 92, 63, 41, 36, 50, 32, 22, 49, 59, 79, 2, 80, 26, 22, 27, 54, 52, 58, 78, 93, 42, 53, 43, 38, 5};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> bolts = {27, 8, 8, 97, 8, 38, 40, 56, 36, 52, 26, 93, 76, 34, 31, 27, 86, 90, 43, 14, 94, 77, 56, 25, 35};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> bolts = {57, 53, 55, 58, 50, 59, 60, 59, 53, 52, 59, 57, 58, 53, 53, 57, 58, 58, 56, 59, 52, 56, 54, 50, 57, 52, 58, 50, 51, 60, 59, 52, 55, 52, 50, 57, 58, 55, 50, 57, 58, 51, 59, 59};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> bolts = {56, 60, 51, 58, 53, 54, 51, 52, 60, 53, 55, 56, 54, 53, 55, 60, 55, 53, 59, 53, 58, 58, 58, 53, 59, 54, 56, 53, 59, 60, 53, 60, 51, 53, 51, 58, 59, 57};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> bolts = {53, 52, 55, 53, 51, 51, 51, 60, 57, 58, 60, 56, 54, 57, 60, 60, 53, 58, 60, 54, 60, 53, 55, 59, 56, 54, 50, 53, 58, 53, 52, 51, 55, 53, 50, 60, 53};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> bolts = {57, 57, 54, 60, 60, 52, 52, 50, 59, 60, 54, 60, 53, 58, 51, 54, 57, 54, 56, 50, 51, 51, 51, 58, 59, 59};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
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
    vector<int> bolts = {56, 50, 59, 55, 55, 60, 54, 54, 51, 55, 50, 57, 60, 60, 52, 59, 53, 50, 55, 55, 57, 52, 60, 55, 59, 56, 60, 59, 52};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> bolts = {54, 52, 51, 57, 52, 51, 59, 59, 58, 58, 51, 54, 60, 51, 53, 58, 53, 51, 60, 55, 60, 53, 58, 59, 56, 52, 58, 54};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> bolts = {59, 59, 57};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> bolts = {53, 60, 51, 57, 52, 51, 60, 60, 54, 56, 54, 53};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
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
    vector<int> bolts = {56, 60};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> bolts = {57, 59, 60, 60, 54, 53, 60, 57, 55, 56, 50, 52, 51, 58, 56, 52, 59, 50, 56, 58};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> bolts = {50, 58, 53, 59, 58, 56, 58, 60, 60, 59, 50, 51, 60, 57, 53, 50, 50, 58, 53, 56, 52, 58, 53, 57, 58};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> bolts = {56, 52, 56, 58, 60, 56, 50, 58, 57, 53, 50, 50, 55, 56, 54, 55, 52, 60, 57, 50, 53, 53, 57, 60, 57, 51};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
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
    vector<int> bolts = {59, 51, 50, 53, 57, 51, 58, 50, 60, 52, 57, 58, 51, 51, 50, 52, 54, 55, 60, 54, 51, 56, 55, 53, 58, 60, 57, 56, 56, 53, 60, 60, 54};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> bolts = {59, 59, 52, 57, 55, 59, 50, 59, 56, 58, 58, 60, 52, 54, 54, 59, 56, 59, 53, 58};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> bolts = {59, 50, 55, 55, 52, 52, 60, 50, 60, 53, 50, 59, 53, 53, 51, 60, 54, 57, 60, 51, 57, 53, 58, 50, 55, 56, 60, 59, 52, 59, 56, 58, 59, 57, 55, 50, 53, 59, 57};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> bolts = {50, 58, 58, 54, 53, 58, 53, 56, 59, 55, 54, 52, 51, 54, 56, 59, 55, 51, 58, 56, 53, 56, 50, 59, 53, 59, 54, 54, 58, 50, 56, 59};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> bolts = {52, 51, 50, 53, 59, 57, 54, 54, 53, 55};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> bolts = {51, 55, 59};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> bolts = {54};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> bolts = {50, 55, 58, 59};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> bolts = {20, 45, 33, 26, 5, 22, 4, 35, 30, 8, 1, 22, 16, 6, 16, 27, 14, 1, 22, 21, 42, 1, 31, 43, 5, 21, 2, 3, 30, 7, 3, 40, 4, 18, 28, 32, 49, 8, 37, 18, 5, 21, 48};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> bolts = {2, 13, 38, 20, 34, 5, 5, 25, 33, 23, 19, 19, 35, 26, 13, 14, 22, 37, 48, 46, 13, 17, 38, 24, 20, 50, 14, 17, 9, 44, 11, 12, 50, 14, 37, 50, 26, 20, 14, 34, 47, 49, 17, 33, 47, 28, 39, 10};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> bolts = {9, 39, 16, 49, 16, 47, 27, 17, 45, 11, 42, 20, 6, 43, 31, 49, 31, 7, 10, 24, 24, 13, 40, 17, 16, 46, 14, 23, 1, 45, 37, 12, 38, 25, 36, 42, 8, 49, 18, 47, 49, 21};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
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
    vector<int> bolts = {32, 17, 21, 22, 16, 13, 14, 47, 10, 45, 14, 6, 18, 25, 47, 33, 32, 42, 4, 46, 27, 14, 4, 46, 39, 42, 39, 19, 47, 37, 30, 33, 24, 6, 4, 36, 7, 23, 24, 42};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> bolts = {11, 30, 50, 24, 28, 12, 21, 31, 41, 49, 49, 48, 19, 32, 22, 30, 19, 37, 47, 36, 22, 19, 24, 4, 21, 21, 8, 27, 2, 21, 1, 6, 47, 13, 27, 6, 11, 47, 37, 29, 21, 10, 30, 31, 1, 42, 19, 3};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
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
    vector<int> bolts = {48, 49, 41, 16, 11, 21, 11, 30, 35, 3, 14, 10, 22, 32, 6, 37, 38, 46, 30, 14, 14, 7, 43, 2, 22, 24, 14, 21, 4, 32, 42, 2, 34, 46, 41, 12, 29, 9, 21, 29, 9, 14};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> bolts = {37, 36, 8, 12, 44, 47, 12, 17, 37, 44, 1, 8, 32, 26, 21, 2, 41, 26, 25, 12, 32, 38, 19, 5, 9, 18, 30, 45, 46, 6, 44, 15, 20, 5, 1, 40, 16, 40, 21, 49, 41, 12, 17};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> bolts = {44, 47, 44, 44, 28, 35, 21, 23, 35, 24, 42, 16, 36, 13, 11, 29, 41, 47, 30, 16, 4, 28, 27, 22, 6, 38, 14, 13, 38, 20, 15, 15, 30, 33, 33, 7, 16, 47, 7, 21};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> bolts = {11, 1, 23, 5, 10, 16, 4, 17, 35, 31, 5, 22, 38, 7, 32, 32, 36, 4, 18, 12, 2, 23, 2, 20, 11, 50, 27, 40, 25, 31, 12, 4, 42, 48, 16, 35, 28, 32, 18, 15, 29, 48, 11, 26, 45, 27, 35, 41, 27};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> bolts = {9, 28, 34, 24, 49, 25, 32, 48, 32, 4, 39, 46, 21, 24, 44, 45, 33, 4, 41, 46, 27, 38, 28, 42, 22, 28, 20, 38, 40, 13, 42, 23, 41, 3, 28, 19, 4, 45, 37, 25, 1};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> bolts = {35, 5, 48, 39, 7, 34, 8, 37, 47, 29, 35, 23, 19, 40, 26, 6, 27, 16, 23, 3, 33, 50, 22, 26, 9, 16, 4, 15, 4, 27, 9, 46, 41, 12, 35, 4, 28, 26, 38, 29, 18};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> bolts = {2, 4, 23, 15, 41, 27, 41, 4, 32, 45, 19, 27, 16, 21, 35, 38, 34, 12, 2, 46, 47, 8, 34, 31, 23, 44, 7, 49, 34, 8, 37, 17, 21, 8, 27, 32, 24, 8, 19, 47, 39, 4};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> bolts = {2, 36, 32, 45, 16, 29, 47, 2, 11, 27, 5, 3, 7, 40, 40, 38, 2, 44, 23, 12, 31, 26, 5, 34, 42, 15, 47, 47, 8, 47, 44, 13, 42, 11, 9, 23, 4, 46, 35, 49, 28, 43, 7, 27, 14, 41};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> bolts = {26, 36, 26, 46, 43, 36, 18, 46, 17, 48, 41, 19, 9, 27, 17, 37, 28, 20, 27, 17, 7, 32, 50, 20, 39, 17, 29, 6, 3, 44, 28, 4, 5, 28, 18, 38, 15, 26, 35, 50, 39, 27, 4, 39, 9, 32, 47};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
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
    vector<int> bolts = {22, 40, 40, 3, 26, 4, 38, 5, 35, 24, 24, 43, 20, 9, 10, 18, 49, 28, 22, 48, 23, 33, 17, 28, 49, 14, 29, 17, 22, 24, 35, 21, 14, 11, 3, 17, 7, 1, 35, 37, 34, 38, 47, 12, 33, 45, 31, 40};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> bolts = {1, 50, 14, 2, 39, 15, 31, 6, 21, 27, 39, 6, 31, 39, 46, 24, 28, 48, 35, 50, 38, 14, 40, 47, 25, 22, 28, 26, 9, 10, 46, 27, 35, 43, 39, 38, 31, 29, 43, 17, 1, 10, 37, 15, 33, 7, 49, 29};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> bolts = {33, 19, 24, 37, 45, 11, 18, 7, 42, 17, 24, 10, 33, 34, 19, 39, 10, 11, 10, 50, 39, 24, 19, 37, 29, 8, 25, 15, 33, 41, 30, 1, 3, 48, 40, 33, 5, 2, 28, 14, 30, 14, 24, 43, 13, 40};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> bolts = {23, 30, 47, 36, 11, 48, 37, 5, 39, 43, 20, 21, 49, 19, 48, 5, 10, 28, 10, 47, 1, 2, 42, 4, 26, 3, 12, 6, 4, 23, 18, 8, 7, 34, 7, 29, 21, 19, 10, 18, 7, 10, 43, 30, 22, 11, 36, 24};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> bolts = {40, 30, 5, 46, 17, 12, 5, 15, 10, 17, 17, 36, 22, 30, 30, 5, 45, 24, 13, 14, 31, 25, 19, 33, 20, 38, 43, 22, 24, 45, 2, 21, 13, 6, 14, 7, 39, 6, 13, 1, 29, 28};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> bolts = {36, 44, 8, 45, 15, 26, 38, 32, 33, 5, 45, 7, 5, 1, 19, 4, 26, 14, 19, 22, 45, 21, 50, 25, 37, 21, 1, 3, 10, 28, 44, 27, 44, 17, 20, 28, 44, 23, 28, 32};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 22, 24, 30, 6, 21, 11, 22, 25, 14, 16, 4, 3, 24, 4, 17, 19, 11, 23, 30, 12, 9, 19, 2, 24, 6};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 15, 8, 20, 8, 15, 8, 24, 1, 16, 11, 17, 11, 1, 7, 5, 18, 28, 26, 19, 18, 6, 13, 10, 12, 7};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 16, 22, 7, 15, 26, 4, 3, 24, 13, 29, 4, 11, 2, 20, 3, 10, 23, 3, 7, 24, 20, 28, 17, 20, 6};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 9, 12, 24, 14, 9, 22, 20, 24, 12, 2, 24, 29, 30, 7, 13, 2, 16, 8, 14, 4, 1, 14, 1, 24, 25};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 27, 14, 17, 22, 29, 23, 12, 23, 19, 15, 29, 28, 11, 20, 24, 17, 2, 29, 21, 14, 24, 8, 17, 26, 23};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 30, 13, 8, 10, 26, 5, 25, 12, 26, 22, 25, 17, 28, 28, 4, 11, 29, 12, 25, 20, 18, 30, 12, 30, 12};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 8, 27, 9, 30, 4, 28, 17, 20, 4, 13, 2, 13, 23, 2, 30, 17, 23, 19, 4, 16, 1, 12, 29, 7};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 24, 1, 22, 8, 20, 15, 18, 28, 5, 15, 18, 29, 11, 1, 22, 8, 28, 14, 17, 30, 5, 10, 2, 28, 8};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 30, 5, 13, 12, 17, 29, 18, 1, 4, 3, 10, 3, 6, 1, 19, 22, 5, 5, 20, 26, 22, 4, 19, 11, 8};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
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
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 11, 11, 25, 9, 16, 12, 11, 5, 8, 26, 11, 19, 22, 9, 2, 25, 23, 20, 13, 15, 7, 24, 22, 28, 4};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 15, 26, 14, 1, 1, 30, 20, 2, 20, 22, 27, 30, 6, 4, 15, 12, 1, 14, 20, 12, 15, 5, 16, 15, 21};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> bolts = {30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> bolts = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> bolts = {1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17, 19, 20, 22, 23, 25, 26, 28, 29, 31, 32, 34, 35, 37, 38, 40, 41, 43, 44, 46, 47, 49, 50, 52, 53, 55, 56, 58, 59, 61, 62, 64, 65, 67, 68, 70, 71, 73, 74};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
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
    vector<int> bolts = {1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17, 19, 20, 22, 23, 25, 26, 28, 29, 31, 32, 34, 35, 37, 25, 28, 8, 30, 14, 1, 1, 5, 19, 27, 23, 18, 5, 2, 30, 15, 12, 8, 29, 18, 4, 7, 4, 3, 9};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> bolts = {1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17, 19, 20, 22, 23, 25, 26, 28, 29, 31, 32, 34, 35, 37, 7, 18, 21, 27, 25, 8, 15, 10, 25, 27, 21, 26, 26, 15, 26, 28, 16, 7, 26, 16, 12, 12, 28, 6, 21};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> bolts = {1, 2, 3, 5, 6, 7, 9, 10, 11, 13, 14, 15, 17, 18, 19, 21, 22, 23, 25, 26, 27, 29, 30, 31, 33, 34, 35, 37, 38, 39, 41, 42, 43, 45, 46, 47, 49, 50, 51, 53, 54, 55, 57, 58, 59, 61, 62, 63, 65, 66};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> bolts = {1, 2, 3, 5, 6, 7, 9, 10, 11, 13, 14, 15, 17, 18, 19, 21, 22, 23, 25, 26, 27, 29, 30, 31, 33, 34, 35, 37, 38, 39, 41, 42, 43, 45, 46, 47, 49, 50, 51, 53, 54, 55, 57, 58, 59, 61, 62, 63, 61, 63};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> bolts = {1, 2, 3, 5, 6, 7, 9, 10, 11, 13, 14, 15, 17, 18, 19, 21, 22, 23, 25, 26, 27, 29, 30, 31, 33, 34, 35, 37, 38, 39, 41, 42, 43, 45, 46, 47, 49, 50, 51, 53, 54, 55, 57, 58, 59, 61, 62, 63, 61, 62};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> bolts = {1, 2, 3, 5, 6, 7, 9, 10, 11, 13, 14, 15, 17, 18, 19, 21, 22, 23, 25, 26, 27, 29, 30, 31, 33, 34, 35, 37, 38, 39, 41, 42, 43, 45, 46, 47, 49, 50, 51, 53, 54, 55, 57, 58, 59, 61, 62, 63, 61, 61};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> bolts = {8, 9};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> bolts = {1, 2, 3, 3, 4, 5};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> bolts = {1, 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10, 10, 11, 12, 13, 13, 14, 15, 16, 16, 17, 18, 19, 19, 20, 21, 22, 22, 23, 24, 25, 25, 26, 27, 28, 28, 29, 30, 31, 31, 32, 33, 34, 34, 35, 36, 37, 37};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> bolts = {2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10, 10, 11, 12, 13, 13, 14, 15, 16, 16, 17, 18, 19, 19, 20, 21, 22, 22, 23, 24, 25, 25, 26, 27, 28, 28, 29, 30, 31, 31, 32, 33, 34, 34, 35, 36, 37, 37, 38, 39};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> bolts = {2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10, 10, 11, 12, 13, 13, 14, 15, 16, 16, 17, 18, 19, 19, 20, 21, 22, 22, 23, 24, 25, 25, 26, 27, 28, 28, 29, 30, 31, 31, 32, 33, 34, 34, 35, 36, 37, 37, 38, 1};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> bolts = {42, 58, 35, 41, 60, 45, 69, 29, 13, 35, 36, 6, 42, 28, 22, 2, 56, 43, 68, 47, 52, 45, 53, 14, 13, 63, 62, 27, 49, 16, 58, 27, 2, 59, 50, 33, 48, 50, 26, 25, 4, 12, 33, 24, 34, 45, 22, 12, 44, 9};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> bolts = {1, 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> bolts = {1, 1, 1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 7, 7, 8, 8, 9, 9, 9, 10, 11, 11, 11, 11, 12, 12, 13, 13, 13, 13, 13, 14, 14, 14, 15, 15, 15, 15, 16, 16};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> bolts = {2, 8, 15, 1, 10, 5, 19, 19, 3, 5, 6, 6, 2, 8, 2, 12, 16, 3, 8, 17, 12, 5, 3, 14, 13, 3, 2, 17, 19, 16, 8, 7, 12, 19, 10, 13, 8, 20, 16, 15, 4, 12, 3, 14, 14, 5, 2, 12, 14, 9};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> bolts = {13, 13, 8, 8, 3, 9, 1, 23, 11, 18, 13, 17, 19, 17, 7, 12, 4, 23, 23, 18, 15, 15, 19, 19, 22, 14, 1, 13, 4, 7, 4, 15, 7, 1, 12, 21, 11, 10, 9, 14, 11, 14, 23, 16, 6, 15, 13, 7, 18, 17};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> bolts = {1, 2, 3, 4, 5, 7, 8, 8, 9, 9, 10, 12, 13, 14, 14, 15, 16, 21, 22, 23, 24, 24, 25, 25, 26, 26, 27, 28, 29, 33, 33, 34, 34, 35, 35};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> bolts = {10, 5, 7, 3, 4, 2, 5, 2, 9, 2, 5, 9, 9, 8, 5, 3, 1, 4, 1, 4, 5, 9, 9, 5, 9, 5, 5, 4, 9, 1, 9, 7, 9, 3, 10, 7, 9, 8, 6, 1, 6, 1, 2, 1, 1, 3, 4, 1, 9, 6};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> bolts = {20, 16, 27, 24, 14, 20, 27, 22, 23, 22, 15, 16, 17, 10, 16, 27, 23, 15, 10, 16, 20, 16, 13, 19, 23, 18, 16, 22, 11, 28, 17, 13, 17, 28, 24, 10, 15, 17, 25, 11, 27, 15, 16, 16, 28, 29, 24, 15, 11, 28};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> bolts = {81, 81, 81, 82, 85, 85, 86, 86, 87, 89, 89, 90, 90, 91, 13, 13, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 16, 17, 18, 21, 23, 23, 25, 26, 27, 28, 28, 29, 30, 31, 32, 33, 33, 50, 51};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> bolts = {1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9, 9};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> bolts = {9, 2, 15, 7, 20, 11, 8, 10, 4, 6, 8, 17, 19, 20, 18, 2, 6, 6, 17, 14, 17, 8, 19, 16, 19, 15, 8, 1, 9, 9};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> bolts = {11, 17, 18, 13, 13, 19, 9, 9, 11, 2, 16, 14, 13, 13, 13, 3, 20, 14, 1, 13, 11, 6, 5, 12, 19, 17, 10, 8, 5, 1, 5, 5, 19, 12, 19, 10, 9, 16, 10, 6, 4, 11, 12, 20, 20, 20, 6, 5, 17, 4};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> bolts = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> bolts = {26, 26, 26, 14, 13, 28, 27, 15, 27, 28, 28, 26, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 11, 12, 13, 14, 15, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 12};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> bolts = {1, 1, 1, 3, 3, 5, 4};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> bolts = {1, 1, 1, 2, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 8, 9, 10, 11, 12, 12, 12, 12, 12, 12, 12};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> bolts = {1, 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 11, 1, 1, 12, 12, 12, 12, 12, 13, 13, 13, 14, 14, 15, 15, 15, 16, 17, 17};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> bolts = {1, 2, 3, 3, 4, 5, 7, 7, 8, 7, 7, 7, 9, 9, 9, 10, 11, 11, 12, 12, 13, 96, 97, 97, 97, 98, 98, 98, 99, 99, 99};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> bolts = {1, 2, 3, 3, 4, 5};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> bolts = {1, 1, 1, 1, 1, 7, 5, 6, 4, 2, 3, 4, 2, 5, 8, 3, 3, 3, 3, 2, 2, 4, 2, 5, 5, 2, 2, 6, 4, 4, 4, 4, 5, 7, 7, 7, 8, 2, 2, 8, 8, 2, 4, 5, 1, 5, 4, 4, 4, 4};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> bolts = {1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 5, 5, 5, 5, 6, 6, 6, 7, 7};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> bolts = {1, 2, 3, 4, 5, 6, 6, 7, 8};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> bolts = {1, 2, 2, 3, 3, 4};
    Wardrobe* pObj = new Wardrobe();
    clock_t start = clock();
    int result = pObj->countUnscrewedHoles(bolts);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=9988&pm=6181
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<int>::iterator vi_i;
typedef vector<string> vs;
typedef vector<string>::iterator vs_i;
typedef pair<int, int> pii;
 
template<class T>
void splitstr(const string &s, vector<T> &out)
{
    istringstream in(s);
    T tmp;
 
    out.clear();
    while (in >> tmp) out.push_back(tmp);
}
 
class Wardrobe
{
public:
    int countUnscrewedHoles(vector <int> bolts);
};
 
struct dps
{
    int dp[55][55][2];
};
 
int Wardrobe::countUnscrewedHoles(vector <int> bolts)
{
    int B = bolts.size();
    int freq[110] = {0};
 
    for (int i = 0; i < B; i++)
        freq[bolts[i]]++;
 
    dps *dp[2];
    dp[0] = new dps;
    dp[1] = new dps;
    memset(&dp[0]->dp, 127, sizeof(dp[0]->dp));
    memset(&dp[1]->dp, 127, sizeof(dp[1]->dp));
    dp[0]->dp[0][0][0] = 0;
    dp[0]->dp[0][0][1] = 0;
    dp[0]->dp[0][0][2] = 0;
 
    for (int i = 100; i >= 0; i--)
    {
        for (int b = 0; b <= freq[i]; b++)
            for (int h = 0; h <= freq[i]; h++)
            {
                int (&cur)[2] = dp[1]->dp[b][h];
                cur[0] = cur[1] = 0x7f7f7f7f;
 
                if (b && h)
                {
                    cur[0] = dp[1]->dp[b - 1][h - 1][0] + 1;
                    cur[1] = dp[1]->dp[b - 1][h - 1][1] + 1;
                }
                if (b <= freq[i + 1])
                {
                    cur[0] <?= dp[0]->dp[freq[i + 1]][freq[i + 1] - b][0] + b;
                    if (!h)
                        cur[0] <?= dp[0]->dp[freq[i + 1]][freq[i + 1] - b][1] + b;
                }
                if (h <= freq[i + 1])
                {
                    cur[1] <?= dp[0]->dp[freq[i + 1] - h][freq[i + 1]][1] + h;
                    if (!b)
                        cur[1] <?= dp[0]->dp[freq[i + 1] - h][freq[i + 1]][0] + h;
                }
            }
        swap(dp[0], dp[1]);
    }
    return B - min(dp[0]->dp[0][0][0], dp[0]->dp[0][0][1]);
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/